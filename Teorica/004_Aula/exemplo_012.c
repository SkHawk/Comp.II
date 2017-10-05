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

#define NUMERO_ARGUMENTOS		2

#define OK				0
#define NUMERO_ARGUMENTOS_INVALIDO	1
#define ARGUMENTO_INVALIDO		2
#define NUMERO_EXCEDE_MAXIMO		3

#define VALOR_MAXIMO_UNSIGNED_SHORT	65535

#define EOS				'\0'

int 
main (int argc, char *argv [])
{
  int entrada;
  unsigned short numero;
  unsigned indice;
  unsigned long long fatorial;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("USO: %s <inteiro nao negativo>\n", argv [0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  for (indice = 0; argv [1][indice] != EOS; indice++)
    if ((argv [1][indice] < '0') || (argv [1][indice] > '9'))
    {
      printf ("Argumento invalido !!!\n");
      printf ("Primeiro caractere invalido: %c\n", argv [1][indice]);
      exit (ARGUMENTO_INVALIDO);
    }

  entrada = atoi (argv [1]);

  if (entrada > VALOR_MAXIMO_UNSIGNED_SHORT)
  {
    printf ("Valor excede o valor maximo: %i\n", VALOR_MAXIMO_UNSIGNED_SHORT);                      
    exit (NUMERO_EXCEDE_MAXIMO);
  }

  numero = (unsigned short) entrada;

  fatorial = 1;
  while (numero > 1)
  {
    fatorial = fatorial * numero;
    numero--;
    /* fatorial *= numero--; */
  }

  printf ("%s!: %llu\n", argv [1], fatorial);

  return OK;
}

/* $RCSfile$ */
