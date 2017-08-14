/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: chamon $
 * $Date: 2017/08/14 02:11:34 $
 * $Log: aula0105.c,v $
 * Revision 1.1  2017/08/14 02:11:34  chamon
 * Initial revision
 *
 *
 */

#include <stdio.h>

#define OK							0

int
main ()
{

  printf ("\t\tTipos Basicos combinados com Modificadores de Sinal\n\n");
  
  printf ("signed char:\n\t\t%lu %s\n", sizeof (signed char), sizeof (signed char) > 1? "bytes": "byte");
  
  printf ("unsigned char:\n\t\t%lu %s\n", sizeof (unsigned char), sizeof (unsigned char) > 1? "bytes": "byte");
  
  printf ("signed int:\n\t\t%lu %s\n", sizeof (signed int), sizeof (signed int) > 1? "bytes": "byte");
  
  printf ("unsigned int:\n\t\t%lu %s\n", sizeof (unsigned int), sizeof (unsigned int) > 1? "bytes": "byte");

  printf ("\n\t\tCombinacoes Invalidas\n");  
  
  printf("Signed Float;\n");
  printf("Unsigned Float;\n");
  printf("Signed Double;\n");
  printf("Unsigned Double;\n");
  printf("Signed Void;\n");
  printf("Unsigned Void\n");

  return OK;

}

/* $RCSfile: aula0105.c,v $ */
