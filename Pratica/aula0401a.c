/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/09/01 02:47:19 $
 * $Log: aula0401a.c,v $
 * Revision 1.1  2017/09/01 02:47:19  alexandre.chamon
 * Initial revision
 *
 *
 */

#include "aula0401.h"

long double
CalcularExponencial (double base, int expoente)
{
  if (expoente == 0)
    return 1;
  if (expoente < 1)
  {
    if (base == 0)
      return (1.0/0.0);
    return (1/(CalcularExponencial(base, (-expoente))));
  }
  else
    return (base * (CalcularExponencial(base, (expoente - 1))));
}

/* $RCSfile: aula0401a.c,v $  */
