/*
 * Universidade Federal do Rio de Janeiro 
 * Escola Politecnica 
 * Departamento de Eletronica e de Computacao 
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza 
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/09/15 16:57:13 $
 * $Log: aula0502.c,v $
 * Revision 1.1  2017/09/15 16:57:13  alexandre.chamon
 * Initial revision
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "aula0501.h"

#define NUMERO_ARGUMENTOS 				2

#define OK 									0
#define NUMERO_ARGUMENTOS_INVALIDO 	1
#define ARGUMENTO_NEGATIVO 			2
#define ARGUMENTO_INVALIDO 			3

#define EOS 								'\0'

int
main (int argc, char *argv[])
{

  unsigned long int termo;
  char *validacao;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s <INTEIRO NAO NEGATIVO>\n", argv[0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }
  
  if (argv[1][0] == '-')
  {
    printf ("USO: %s <INTEIRO NAO NEGATIVO>\n", argv[0]);
    exit (ARGUMENTO_NEGATIVO);
  }
  
  termo = strtod (argv[1], &validacao);
  
  if (*validacao != EOS)
  {
    printf ("Primeiro caractere invalido: %c\n",validacao[0]);
    exit (ARGUMENTO_INVALIDO);
  }

  printf ("S(%ld) = %f\n", termo, CalcularSerieHarmonicaAlternada (termo));

  return OK;

}

/* $RCSfile: aula0502.c,v $  */
