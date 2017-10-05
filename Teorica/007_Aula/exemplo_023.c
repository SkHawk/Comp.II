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

#define NUMERO_ARGUMENTOS		1 + COMPRIMENTO_DRE

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
  char *validacao;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s d1 d2 d3 d4 d5 d6 d7 d8 dv\n", argv [0]); 
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  for (indice = 1; indice < argc; indice++)
  {
    if (strlen (argv [indice]) != 1)
    {
      printf ("Argumento invalido: \"%s\"\n", argv [indice]);
      exit (ARGUMENTO_INVALIDO);
    }

    dre [indice - 1] = (byte) strtoul (argv [indice], &validacao, 10);
    if (*validacao != EOS)
    {
      printf ("Argumento contem caractere invalido: %c\n", *validacao);
      exit (CARACTERE_INVALIDO);
    }
  }

  if (ValidarDre (dre) == falso) /* if (!ValidarDre (dre)) */
    printf ("DRE invalido\n");
  else
    printf ("DRE valido\n");

  return OK;
}

/* $RCSfile$ */
