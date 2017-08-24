/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/2
 * Prof. Marcelo Luiz Drumond Lanza
 *
 * $Author$
 * $Date$
 * $Log$
 */

#include "exemplo_014.h"

unsigned long long
CalcularFatorial (unsigned short numero)
{
  unsigned long long fatorial;
  
  fatorial = 1;

  for (; numero > 1; numero--)
    fatorial *= numero;

  return fatorial;
}

/* $RCSfile$ */
