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

#define _XOPEN_SOURCE
#include <unistd.h>

#include <stdio.h>
#include <string.h>

#define OK					0
#define COMPRIMENTO_MAXIMO_NOME			8

int main (int argc, char *argv [])
{
  int x, y;
  char letra;
  float a, b;

  printf ("Entre com os valores\n");
  scanf ("%i %i", &x, &y);
  printf ("x: %i\ny: %i\n", x, y);

  scanf ("%c", &letra);
  printf ("Letra: %c\n", letra);

  scanf ("%f %f", & a, &b);
  printf ("a: %5.02f\nb: %06.01f\n", a, b); 
  return OK;
}

/* $RCSfile$ */
