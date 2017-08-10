#include <stdio.h>

#define OK			0

int 
main (int argc, char *argv [])
{
  unsigned short int indice;

  for (indice = 0; indice < argc; indice++)
    printf ("ARG (#%u): \"%s\"\n", indice, argv [indice]);

  return OK;
}
