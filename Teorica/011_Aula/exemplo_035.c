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

#define OK 				0

#define NUMERO_NOTAS			6

int
main (int argc, char **argv)
{
  float notas [NUMERO_NOTAS];
  unsigned indice;

  /* if (argc ... */

  for (indice = 0; indice < NUMERO_NOTAS; indice++)
  {
    printf ("Nota%u:", indice + 1);
    scanf ("%f", &(notas [indice]));
    printf ("%.02f\n", notas [indice]);
  } 
  
  return OK;
}

/* $RCSfile$ */
