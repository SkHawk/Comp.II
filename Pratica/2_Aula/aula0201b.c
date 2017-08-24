/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: chamon $
 * $Date: 2017/08/24 03:19:10 $
 * $Log: aula0201b.c,v $
 * Revision 1.2  2017/08/24 03:19:10  chamon
 * Adicionado as condicionais
 *
 * Revision 1.1  2017/08/24 03:04:42  chamon
 * Initial revision
 *
 *
 */

#include "aula0201.h"

ull
CalcularMaximoDivisorComum (ull x, ull y)
{
  ull auxiliar;

  if ((x == 0) && (y == 0)) 
    return 0; 

  if (x == 0) 
    return y; 

  if (y == 0)
    return x;
  
  if (x%y == 0) 
    return y;
  do
  {
    x = x%y;
    auxiliar = x;
    x = y;
    y = auxiliar;
  } while (y != 0);

  return (x);
}

/* $RCSfile: aula0201b.c,v $ */
