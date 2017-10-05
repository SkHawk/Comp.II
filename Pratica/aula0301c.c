/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/08/30 16:53:26 $
 * $Log: aula0301c.c,v $
 * Revision 1.1  2017/08/30 16:53:26  alexandre.chamon
 * Initial revision
 *
 *
 */

#include "aula0301.h"

ull
CalcularTermoSerieFibonacci (unsigned short numero)
{
 
  ull numeroAnterior1, numeroAnterior2, numeroPosterior;
  unsigned short indice;

  numeroAnterior2 = 0;
  numeroAnterior1 = 1;  
  numeroPosterior = (numeroAnterior1 + numeroAnterior2);

  if (numero <= 1)
    return numero;
  for (indice = 2; indice <= numero; indice++)
  {
    numeroPosterior = (numeroAnterior1 + numeroAnterior2);
    numeroAnterior2 = numeroAnterior1;
    numeroAnterior1 = numeroPosterior;
  }
  return numeroPosterior;
}

/* $RCSfile: aula0301c.c,v $ */
