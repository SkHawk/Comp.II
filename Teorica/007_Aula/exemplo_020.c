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
#include "exemplo_020.h"

void
MostrarMatriz (float matriz [LINHAS][COLUNAS])
{
  unsigned linha, coluna;

  for (linha = 0; linha < LINHAS; linha++)
  {
    for (coluna = 0; coluna < COLUNAS; coluna++)
      printf ("%.02f\t", matriz [linha][coluna]);
    printf ("\n");
  }
}

void
SomarMatrizes (float matrizA [LINHAS][COLUNAS],
	       float matrizB [LINHAS][COLUNAS],
	       float matrizSoma [LINHAS][COLUNAS])
{
  unsigned linha, coluna;

  for (linha = 0; linha < LINHAS; linha++)
    for (coluna = 0; coluna < COLUNAS; coluna++)
      matrizSoma [linha][coluna] = matrizA [linha][coluna] + matrizB [linha][coluna];

}

/* $RCSfile$ */
