/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/08/12 02:52:26 $
 * $Log: aula0102.c,v $
 * Revision 1.1  2017/08/12 02:52:26  alexandre.chamon
 * Initial revision
 *
 *
 */

#include <stdio.h>

#define OK							0

int
main ()
{

  printf ("\t\tModificadores de Sinal\n\n");
  printf ("signed:\n\t\t%lu ", sizeof (signed));
  sizeof (signed) > 1? printf ("bytes\n"): printf ("byte\n");
  printf ("unsigned:\n\t\t%lu ", sizeof (unsigned));
  sizeof (unsigned) > 1? printf ("bytes\n"): printf ("byte\n");
  
  return OK;

}

/* $RCSfile: aula0102.c,v $ */
