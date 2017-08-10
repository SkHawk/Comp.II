/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Comtupacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author$
 * $Date$
 * $Log$
 *
 */

#include <stdio.h>

#define OK							0

int
main ()
{
  printf("\t\tTipos Basicos\n\n");
  printf("char:\n\t\t%lu ",sizeof(char));
  sizeof(char)>1?printf("bytes\n"):printf("byte\n");
  printf("int:\n\t\t%lu ",sizeof(int));
  sizeof(int)>1?printf("bytes\n"):printf("byte\n");
  printf("float:\n\t\t%lu ",sizeof(float));
  sizeof(float)>1?printf("bytes\n"):printf("byte\n");
  printf("double:\n\t\t%lu ",sizeof(double));
  sizeof(double)>1?printf("bytes\n"):printf("byte\n");
  printf("void:\n\t\t%lu ",sizeof(void));
  sizeof(void)>1?printf("bytes\n"):printf("byte\n");

  return OK;
}

/* $RCSfile$ */
