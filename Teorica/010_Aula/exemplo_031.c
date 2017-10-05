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
#include <stdlib.h>
#include <pwd.h>
#include <unistd.h>

#define COMPRIMENTO_SENHA	 	128
#define OK 				0

int
main (int argc, char **argv)
{
  char *senha, *confirmacao;

  senha = getpass ("Senha:");
  printf ("Senha: \"%p\"\n", senha);
  printf ("Senha: \"%s\"\n", senha);
  
  confirmacao = getpass ("Confirmacao:");
  printf ("Senha: \"%p\"\n", senha);
  printf ("Senha: \"%s\"\n", senha);
  printf ("Confirmacao: \"%p\"\n", confirmacao);
  printf ("Confirmacao: \"%s\"\n", confirmacao);

  return OK;
}

/* $RCSfile$ */
