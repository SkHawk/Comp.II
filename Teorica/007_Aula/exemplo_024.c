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
#include <string.h>

#include "exemplo_022.h"

#define NUMERO_ARGUMENTOS		2

#define OK				0
#define NUMERO_ARGUMENTOS_INVALIDO	1
#define ARGUMENTO_INVALIDO		2
#define CARACTERE_INVALIDO		3

#define EOS				'\0'

int 
main (int argc, char *argv [])
{
  byte indice;
  byte dre [COMPRIMENTO_DRE];

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s d1d2d3d4d5d6d7d8dv\n", argv [0]); 
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  if (strlen (argv [1]) != COMPRIMENTO_DRE)
  {
    printf ("Argumento invalido: \"%s\"\n", argv [1]);
    exit (ARGUMENTO_INVALIDO);
  }

  for (indice = 0; indice < COMPRIMENTO_DRE; indice++)
  {
    if (argv [1][indice] < '0' || argv [1][indice] > '9')
    {
      printf ("Argumento contem caractere invalido: %c\n", argv [1][indice]);
      exit (CARACTERE_INVALIDO);
    }

    dre [indice] = argv [1][indice] - '0';
  }

  if (ValidarDre (dre) == falso) /* if (!ValidarDre (dre)) */
    printf ("DRE invalido\n");
  else
    printf ("DRE valido\n");

  return OK;
}

/* $RCSfile$ */
