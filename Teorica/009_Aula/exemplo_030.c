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
#include <time.h>

#define COMPRIMENTO_SENHA	 	16
#define OK 				0

#define CARACTERES_VALIDOS "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"

int
main (int argc, char **argv)
{
  unsigned contador;

  srand ((unsigned) time (NULL)); 
  for (contador = 0; contador < COMPRIMENTO_SENHA; ++contador)
      printf ("%c", CARACTERES_VALIDOS [rand () % strlen (CARACTERES_VALIDOS)]);
  printf ("\n");

  return OK;
}

/* $RCSfile$ */
