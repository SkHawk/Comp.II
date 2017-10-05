/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/08/30 16:33:42 $
 * $Log: aula0302.c,v $
 * Revision 1.1  2017/08/30 16:33:42  alexandre.chamon
 * Initial revision
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#include "aula0301.h"

#define NUMEROS_ARGUMENTOS 					2

#define OK 											0
#define NUMERO_DE_ARGUMENTOS_INVALIDO 		1
#define ARGUMENTO_INVALIDO 					2

#define EOS 										'\0'

int
main (int argc, char *argv[])
{
  unsigned short numero;
  unsigned indiceFatorial;
  char *validacao;

  if (argc != NUMEROS_ARGUMENTOS)
  {
    printf ("USO: %s <Inteiro nao negativo>\n", argv[0]);
    exit (NUMERO_DE_ARGUMENTOS_INVALIDO);
  }

  if (argv[1][0] == '-')
  {
    printf ("Essa funcao nao recebe numeros negativos!\n");
    exit (ARGUMENTO_INVALIDO);
  }

  numero = ((unsigned short) strtoul (argv [1], &validacao, 10));

  if (*validacao != EOS)
  {
    printf ("Primeiro caractere invalido: %c\n",validacao[0]);
    exit (ARGUMENTO_INVALIDO);
  }
  for (indiceFatorial = 0; indiceFatorial <= numero; indiceFatorial++)
    printf ("F(%hu) = %llu\n", indiceFatorial, CalcularTermoSerieFibonacci(indiceFatorial));

  return OK;
}

/* $RCSfile: aula0302.c,v $ */
