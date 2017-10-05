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
  char *final;

  if (string == NULL)
    return ARGUMENTO_INVALIDO; /* -1 */

  final = string;
  while (*final  != '\0')
    final++;

  return final - string;
}

/* $RCSfile$ */
