#include <stdio.h>
#include <stdlib.h>

#define OK			0

int 
main (int argc, char *argv [])
{
  int numero;

  numero = atoi (argv [1]);

  if ((numero % 2) == 0)
    printf ("Par\n");
  else
    printf ("Impar\n");
  return OK;
}
