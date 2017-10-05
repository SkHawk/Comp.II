/* 
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/08/30 16:33:42 $
 * $Log: aula0301a.c,v $
 * Revision 1.1  2017/08/30 16:33:42  alexandre.chamon
 * Initial revision
 *
 *
 */

#include "aula0301.h"

ull
CalcularTermoSerieFibonacci (unsigned short numero)
{
 
  if (numero <= 1)
    return numero;
  
  return (CalcularTermoSerieFibonacci(numero-1) + CalcularTermoSerieFibonacci(numero-2));
}

/* $RCSfile: aula0301a.c,v $ */
