/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: chamon $
 * $Date: 2017/08/12 03:29:15 $
 * $Log: aula0103.c,v $
 * Revision 1.1  2017/08/12 03:29:15  chamon
 * Initial revision
 *
 *
 */

#include <stdio.h>

#define OK							0

int
main ()
{

  printf ("\t\tModificadores de Largura\n\n");
  printf ("short:\n\t\t%lu ", sizeof (short));
  sizeof (short) > 1? printf ("bytes\n"): printf ("byte\n");
  printf ("long:\n\t\t%lu ", sizeof (long));
  sizeof (long) > 1? printf ("bytes\n"): printf ("byte\n");
  printf ("long long:\n\t\t%lu ", sizeof (long long));
  sizeof (long long) > 1? printf ("bytes\n"): printf ("byte\n");

  return OK;

}

/* $RCSfile: aula0103.c,v $ */
