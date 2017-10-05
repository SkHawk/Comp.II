/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 *
 * $Author$
 * $Date$
 *
 * $Log$
 */

#include <stdio.h>

int
main (int argc, char **argv)
{

  int x, y, z, w;
  char letra;

  printf ("Entre com o valor de x: ");
  scanf ("%i", &x);
  printf ("\nx: %i\n", x);

  fflush (stdin);

  printf ("Entre com o valor de letra: ");
  scanf ("%c", &letra);
  printf ("\nletra: %c\n", letra);
  printf ("\nletra: %02X\n", letra);
  
  printf ("Entre com os valores de y e z: ");
  scanf ("%i %i", &y, &z);
  printf ("\ny: %i\n", y);
  printf ("\nz: %i\n", z);

  printf ("Entre com o valor de letra: ");
  scanf ("%c", &letra);
  printf ("\nletra: %c\n", letra);
  printf ("\nletra: %02X\n", letra);

  printf ("Entre com o valor de w: ");
  scanf ("%i", &w);
  printf ("\nw: %i\n", w);

  return 0;
}

/* $RCSfile$ */
