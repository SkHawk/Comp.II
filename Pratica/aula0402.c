/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/09/01 02:47:19 $
 * $Log: aula0402.c,v $
 * Revision 1.1  2017/09/01 02:47:19  alexandre.chamon
 * Initial revision
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "aula0401.h"

#define NUMERO_ARGUMENTOS 						3

#define OK 											0
#define NUMERO_ARGUMENTOS_INVALIDO 			1
#define ARGUMENTO_INVALIDO 					2

#define EOS 										'\0'

int
main (int argc, char *argv[])
{
  double base;
  int expoente;
  char *validacao;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s <BASE (real)> <EXPOENTE (inteiro)>\n", argv[0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  base = strtod (argv[1], &validacao);
  if (*validacao != EOS)
  {
    printf ("Primeiro caractere da base invalido: %c\n", validacao[0]);
    exit (ARGUMENTO_INVALIDO);
  }

  expoente = strtol (argv[2], &validacao, 10);
  if (*validacao != EOS)
  {
    printf ("Primeiro caractere do expoente invalido: %c\n", validacao[0]);
    exit (ARGUMENTO_INVALIDO);
  }

  printf ("(%g)^(%d) = %.2Lf\n", base, expoente, CalcularExponencial (base, expoente));

  return OK;
}

/* $RCSfile: aula0402.c,v $  */
