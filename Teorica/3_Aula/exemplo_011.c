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

#define NUMERO_ARGUMENTOS		2

#define OK				0
#define NUMERO_ARGUMENTOS_INVALIDO	1
#define ARGUMENTO_INVALIDO		2

#define EOS				'\0'

int 
main (int argc, char *argv [])
{
  int numero;
  unsigned indice;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s <inteiro>\n", argv [0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  for (indice = 0; argv [1][indice] != EOS; indice++)
    if ((argv [1][indice] < '0') || (argv [1][indice] > '9'))
    {
      printf ("Argumento invalido !!!\n");
      printf ("Primeiro caractere invalido: %c\n", argv [1][indice]);
      exit (ARGUMENTO_INVALIDO);
    }

  numero = atoi (argv [1]);

  if ((numero % 2) == 0)
    printf ("Par\n");
  else
    printf ("Impar\n");

  return OK;
}

/* $RCSfile$ */
