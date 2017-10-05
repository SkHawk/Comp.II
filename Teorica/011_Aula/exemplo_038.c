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

#define OK 				0
#define COMPRIMENTO_MAXIMO_NOME		7

int
main (int argc, char **argv)
{
  char nome [COMPRIMENTO_MAXIMO_NOME + 1];

  /* if (argc ... */

  do
  {
    printf ("Nome: ");
    gets (nome);
    printf ("\"%s\"\n", nome);
  }
  while (strcmp (nome, "FIM"));

  return OK;
}

/* $RCSfile$ */
