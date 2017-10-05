/*
 * Universidade Federal do Rio de Janeiro 
 * Escola Politecnica 
 * Departamento de Eletronica e de Computacao 
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza 
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/09/21 01:18:37 $
 * $Log: aula0501c.c,v $
 * Revision 1.1  2017/09/21 01:18:37  alexandre.chamon
 * Initial revision
 *
 *
 */

#include "aula0401.h"

float
CalcularSerieHarmonicaAlternada (unsigned long int numero)
{
  float resultado;
  int indice;
  
  if (numero == 0)
    return (numero);
  else
  {
    resultado = 0;
    for (indice = 1; indice <= numero; indice++)
    {
      if ((indice % 2) == 0)
        resultado = resultado - (1/(CalcularExponencial (indice, indice)));
      else
        resultado = resultado + (1/(CalcularExponencial (indice, indice)));
    }
    return (resultado);
  }  
}

/* $RCSfile: aula0501c.c,v $  */
