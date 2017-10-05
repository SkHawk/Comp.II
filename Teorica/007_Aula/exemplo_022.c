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

#include "exemplo_022.h"

boolean
ValidarDre (byte dre [COMPRIMENTO_DRE])
{
  byte indice = 0;
  unsigned short soma = 0;

  for ( ; indice < (COMPRIMENTO_DRE -1); indice++)
    soma += dre [indice] * (indice + 1);

  if ((soma % 10) == dre [indice])
    return verdadeiro;
  return falso;
}

/* $RCSfile$ */
