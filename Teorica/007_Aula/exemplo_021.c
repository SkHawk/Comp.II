/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 *
 * $Author$
 * $Date$
 * $Log$
 */

#include <stdio.h>
#include <stdlib.h>

#include "exemplo_020.h"

#define NUMERO_ARGUMENTOS		1 + 2 * LINHAS * COLUNAS

#define OK				0
#define NUMERO_ARGUMENTOS_INVALIDO	1
#define ARGUMENTO_INVALIDO		2

#define EOS				'\0'

int 
main (int argc, char *argv [])
{
  unsigned linha, coluna;
  float primeiraMatriz [LINHAS][COLUNAS];
  float segundaMatriz [LINHAS][COLUNAS];
  float matrizSoma [LINHAS][COLUNAS];
  char *validacao;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s a11 ... a1%i a%i1 ... a%i%i b11 ...b1%i b%i1 ... b%i%i\n", 
            argv [0], COLUNAS, LINHAS, LINHAS, COLUNAS, COLUNAS, LINHAS, LINHAS, COLUNAS);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  for (linha = 0; linha < LINHAS; linha++)
    for (coluna = 0; coluna < COLUNAS; coluna++)
    {
      primeiraMatriz [linha][coluna] = strtof (argv [coluna + (linha * COLUNAS) + 1], &validacao);
      if (*validacao != EOS)
      {
         printf ("Argumento invalido\nPrimeiro caractere invalido: %c\n", *validacao);
	 exit (ARGUMENTO_INVALIDO);
      }
      segundaMatriz [linha][coluna] = strtof (argv [coluna + (linha * COLUNAS) + (LINHAS * COLUNAS) + 1], &validacao);
      if (*validacao != EOS)
      {
         printf ("Argumento invalido\nPrimeiro caractere invalido: %c\n", *validacao);
	 exit (ARGUMENTO_INVALIDO);
      }
    }

  printf ("Matriz 1\n");
  MostrarMatriz (primeiraMatriz);
  printf ("Matriz 2\n");
  MostrarMatriz (segundaMatriz);

  SomarMatrizes (primeiraMatriz, segundaMatriz, matrizSoma);

  printf ("Matriz Soma\n");
  MostrarMatriz (matrizSoma);
  return OK;
}

/* $RCSfile$ */
