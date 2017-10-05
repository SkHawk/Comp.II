/*
 * Universidade Federal do Rio de Janeiro 
 * Escola Politecnica 
 * Departamento de Eletronica e de Computacao 
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza 
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/09/15 16:57:13 $
 * $Log: aula0501a.c,v $
 * Revision 1.1  2017/09/15 16:57:13  alexandre.chamon
 * Initial revision
 *
 *
 */

#include "aula0401.h"

float
CalcularSerieHarmonicaAlternada (unsigned long int numero)
{
  
  if (numero == 0)
    return (numero);
  else if ((numero % 2) == 0)
    return (CalcularSerieHarmonicaAlternada (numero-1) - (1 / CalcularExponencial (numero, numero)));
  else
    return (CalcularSerieHarmonicaAlternada (numero-1) + (1 / CalcularExponencial (numero, numero)));
    
}

/* $RCSfile: aula0501a.c,v $  */
