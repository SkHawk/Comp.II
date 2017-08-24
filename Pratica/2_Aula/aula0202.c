/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: chamon $
 * $Date: 2017/08/24 02:36:44 $
 * $Log: aula0202.c,v $
 * Revision 1.1  2017/08/24 02:36:44  chamon
 * Initial revision
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "aula0201.h"

#define NUMEROS_ARGUMENTOS 					3

#define OK 											0
#define NUMERO_DE_ARGUMENTOS_INVALIDO 		1

int
main (int argc, char *argv[])
{
  int numero1, numero2;

  if (argc != NUMEROS_ARGUMENTOS)
  {
    printf ("USO: %s <Numero 1>  <Numero 2>\n", argv[0]);
    exit (NUMERO_DE_ARGUMENTOS_INVALIDO);
  }

  numero1 = atoi (argv[1]);
  numero2 = atoi (argv[2]);

  printf ("MDC entre %s e %s eh: %llu\n", argv[1], argv[2], CalcularMaximoDivisorComum((ull) numero1, (ull) numero2));

  return OK;
}

/* $RCSfile: aula0202.c,v $ */
