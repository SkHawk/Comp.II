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

#define NUMERO_ARGUMENTOS		1

#define OK				0
#define NUMERO_ARGUMENTOS_INVALIDO	1

/*
#define _MY_DEBUG_
*/

void
TrocarValores (int, int);

void
TrocarValores (int a, int b)
{
  int auxiliar;

  #ifdef _MY_DEBUG_
  printf ("Funcao - Inicio\n");
  printf ("a: %i\n", a);
  printf ("b: %i\n", b);
  printf ("auxiliar: %i\n", auxiliar);
  printf ("a: %p\n", &a);
  printf ("b: %p\n", &b);
  printf ("auxiliar: %p\n", &auxiliar);
  #endif

  auxiliar = a;
  a = b;
  b = auxiliar;

  #ifdef _MY_DEBUG_
  printf ("Funcao - Fim\n");
  printf ("a: %i\n", a);
  printf ("b: %i\n", b);
  printf ("auxiliar: %i\n", auxiliar);
  printf ("a: %p\n", &a);
  printf ("b: %p\n", &b);
  printf ("auxiliar: %p\n", &auxiliar);
  #endif

}

int 
main (int argc, char *argv [])
{
  int x, y;

  #ifdef _MY_DEBUG_
  printf ("Inicio\n");
  printf ("x: %i\n", x);
  printf ("y: %i\n", y);
  printf ("x: %p\n", &x);
  printf ("y: %p\n", &y);
  #endif

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s\n", argv [0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  x = 10;
  y = 20;

  #ifdef _MY_DEBUG_
  printf ("Meio\n");
  printf ("x: %i\n", x);
  printf ("y: %i\n", y);
  printf ("x: %p\n", &x);
  printf ("y: %p\n", &y);
  #endif

  TrocarValores (x, y);

  #ifdef _MY_DEBUG_
  printf ("Fim\n");
  printf ("x: %i\n", x);
  printf ("y: %i\n", y);
  printf ("x: %p\n", &x);
  printf ("y: %p\n", &y);
  #endif

  printf ("x: %i\ny: %i\n", x, y);

  return OK;
}

/* $RCSfile$ */
