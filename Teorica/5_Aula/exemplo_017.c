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

/* #define BYTE unsigned char */

typedef unsigned char byte;

int 
main (int argc, char *argv [])
{
  /* BYTE indice; */
  byte indice;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s\n", argv [0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  for (indice = 0; indice < 255; indice++)
    if (indice < ' ' /* 32 ou 0x20 */ ||
        indice > '~' /* 126 ou 0x7E */)
      printf ("%03u\t%02X\n", indice, indice);
    else
      printf ("%03u\t%02X\t%c\n", indice, indice, indice);

  printf ("%03u\t%02X\n", indice, indice);

  return OK;
}

/* $RCSfile$ */
