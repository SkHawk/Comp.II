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

#include <stdio.h>

#include "exemplo_025.h"

size_t
CalcularComprimentoString (const char *string /* char [TAMANHO_MAXIMO] */)
{
  size_t comprimentoString;
  
  if (string == NULL)
    return ARGUMENTO_INVALIDO; /* -1 */

  comprimentoString = 0;
  while (string [comprimentoString] != '\0')
    comprimentoString++;

  return comprimentoString;
}

/* $RCSfile$ */
