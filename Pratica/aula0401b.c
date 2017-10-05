/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/09/01 03:10:40 $
 * $Log: aula0401b.c,v $
 * Revision 1.1  2017/09/01 03:10:40  alexandre.chamon
 * Initial revision
 *
 *
 */

#include "aula0401.h"

long double
CalcularExponencial (double base, int expoente)
{
  long double exponencial;
  unsigned indice, expoenteInverso; 

  exponencial = 1;
  indice = 1; 
  if (expoente == 0)
    return 1;

  if (expoente < 1)
  {
    if (base == 0)
      return (1.0/0.0);
    
    expoenteInverso = -expoente;
    do
    {
      exponencial *= base;
      indice++;
    }
    while (indice <= expoenteInverso);
    return (1/exponencial);
  }
  else
    do
    {
      exponencial *= base;
      indice++;
    }
    while (indice <= expoente);
    return (exponencial);
}

/* $RCSfile: aula0401b.c,v $  */
