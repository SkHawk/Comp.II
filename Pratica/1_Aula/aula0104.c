/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
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

  printf ("\t\tModificadores de Sinal combinados com Modificadores de Largura\n\n");
  
  printf ("signed short:\n\t\t%lu %s\n", sizeof (signed short), sizeof (signed short) > 1? "bytes": "byte");
  
  printf ("unsigned short:\n\t\t%lu %s\n", sizeof (unsigned short), sizeof (unsigned short) > 1? "bytes": "byte");
  
  printf ("signed long:\n\t\t%lu %s\n", sizeof (signed long), sizeof (signed long) > 1? "bytes": "byte");
  
  printf ("unsigned long:\n\t\t%lu %s\n", sizeof (unsigned long), sizeof (unsigned long) > 1? "bytes": "byte");
  
  printf ("signed long long:\n\t\t%lu %s\n", sizeof (signed long long), sizeof (signed long long) > 1? "bytes": "byte");
  
  printf ("unsigned long long:\n\t\t%lu %s\n", sizeof (unsigned long long), sizeof (unsigned long long) > 1? "bytes": "byte");

  printf ("\n\t\tCombinacoes Invalidas\n");  

  return OK;

}

/* $RCSfile$ */
