/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/09/01 13:06:04 $
 * $Log: aula0401c.c,v $
 * Revision 1.2  2017/09/01 13:06:04  alexandre.chamon
 * Inicializando o indice
 *
 * Revision 1.1  2017/09/01 12:55:36  alexandre.chamon
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
  if (expoente == 0)
    return 1;

  if (expoente < 1)
  {
    if (base == 0)
      return (1.0/0.0);
    
    expoenteInverso = -expoente;
    for (indice=0;indice < expoenteInverso;indice++)
    {
      exponencial *= base;
    }
    return (1/exponencial);
  }
  else
    for (indice=0;indice < expoente;indice++)
    {
      exponencial *= base;
    }
    return (exponencial);
}

/* $RCSfile: aula0401c.c,v $  */
