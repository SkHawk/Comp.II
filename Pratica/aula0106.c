/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/08/14 02:20:51 $
 * $Log: aula0106.c,v $
 * Revision 1.1  2017/08/14 02:20:51  alexandre.chamon
 * Initial revision
 *
 *
 */

#include <stdio.h>

#define OK							0

int
main ()
{

  printf ("\t\tTipos Basicos combinados com Modificadores de Largura\n\n");
  
  printf ("short int:\n\t\t%lu %s\n", sizeof (short int), sizeof (short int) > 1? "bytes": "byte");
  
  printf ("long int:\n\t\t%lu %s\n", sizeof (long int), sizeof (long int) > 1? "bytes": "byte");
  
  printf ("long long int:\n\t\t%lu %s\n", sizeof (long long int), sizeof (long long int) > 1? "bytes": "byte");
  
  printf ("long double:\n\t\t%lu %s\n", sizeof (long double), sizeof (long double) > 1? "bytes": "byte");

  printf ("\n\t\tCombina§coes Invalidas\n");  
  
  printf("short char;\n");
  printf("long char;\n");
  printf("long long char;\n");
  printf("short float;\n");
  printf("long float;\n");
  printf("long long float;\n");
  printf("short double;\n");
  printf("long long double;\n");
  printf("short void;\n");
  printf("long void;\n");
  printf("long long void\n");

  return OK;

}

/* $RCSfile: aula0106.c,v $ */
