#include <stdio.h>
#include <stdlib.h>

#define NUMERO_ARGUMENTOS	2

#define OK			0

int 
main (int argc, char *argv [])
{
  int numero;

  if (argc == NUMERO_ARGUMENTOS)
  {
    numero = atoi (argv [1]);

    if ((numero % 2) == 0)
      printf ("Par\n");
    else
      printf ("Impar\n");
  }
  else
    printf ("USO: %s <inteiro>\n", argv [0]);
  return OK;
}
