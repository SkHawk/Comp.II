/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/08/30 17:02:35 $
 * $Log: aula0301d.c,v $
 * Revision 1.1  2017/08/30 17:02:35  alexandre.chamon
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
  indice = 2;

  if (numero <= 1)
    return numero;
  while (indice <= numero)
  {
    numeroPosterior = (numeroAnterior1 + numeroAnterior2);
    numeroAnterior2 = numeroAnterior1;
    numeroAnterior1 = numeroPosterior;
    indice++;
  }
  return numeroPosterior;
}

/* $RCSfile: aula0301d.c,v $ */
