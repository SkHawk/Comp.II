/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/08/24 03:35:07 $
 * $Log: aula0201c.c,v $
 * Revision 1.1  2017/08/24 03:35:07  alexandre.chamon
 * Initial revision
 *
 *
 */

#include "aula0201.h"

ull
CalcularMaximoDivisorComum (ull x, ull y)
{
  ull indice, resto;
  if ((x == 0) && (y == 0))
    return 0;

  if (x == 0)
    return y;

  if (y == 0)
    return x;

  if (x%y == 0)
    return y;
  resto = x%y;
  for (indice=resto; indice != 0; indice=resto)
  {
    resto = x%y;
    x = y;
    y = resto;
  }

  return x;
}

/* $RCSfile: aula0201c.c,v $ */
