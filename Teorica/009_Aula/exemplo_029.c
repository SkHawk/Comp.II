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
#include <time.h>

#define COMPRIMENTO_SEQUENCIA 		10
#define OK 				0

int
main (int argc, char **argv)
{
  unsigned contador;
  unsigned semente;

  semente = (unsigned) time (NULL);
  srand (semente);
  /* srand (time (NULL)); */
  for (contador = 0; contador < COMPRIMENTO_SEQUENCIA; ++contador)
      printf ("%i\n", (rand () % 40) + 1);

  return OK;
}

/* $RCSfile$ */
