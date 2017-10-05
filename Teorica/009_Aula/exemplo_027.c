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

#define COMPRIMENTO_SEQUENCIA 		10
#define OK 				0

int
main (int argc, char **argv)
{
  unsigned contador;
  int numero;

  for (contador = 0; contador < COMPRIMENTO_SEQUENCIA; )
  {
    numero = rand ();
    if (numero >= 1 && numero <= 40)
    {
      printf ("%i\n", numero);
      contador++;
    }
  }

  return OK;
}

/* $RCSfile$ */
