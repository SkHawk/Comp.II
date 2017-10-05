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
#include <string.h>
#include <pwd.h>
#include <unistd.h>

#define COMPRIMENTO_SENHA	 	128
#define OK 				0

int
main (int argc, char **argv)
{
  char senha [COMPRIMENTO_SENHA];
  char confirmacao [COMPRIMENTO_SENHA];
  char *temporaria;

  strcpy (senha, temporaria =  getpass ("Senha:"));
  printf ("Temporaria: \"%p\"\n", temporaria);
  printf ("&Temporaria: \"%p\"\n", &temporaria);
  printf ("*Temporaria: \"%s\"\n", temporaria);
  printf ("Senha: \"%p\"\n", senha);
  printf ("Senha: \"%s\"\n", senha);
  memset (temporaria, 0x00, strlen (senha));
  printf ("*Temporaria: \"%s\"\n", temporaria);
  
  strcpy (confirmacao, temporaria = getpass ("Confirmacao:"));
  memset (temporaria, 0x00, strlen (confirmacao));
  printf ("Temp: \"%p\"\n", temporaria);
  printf ("Senha: \"%p\"\n", senha);
  printf ("Senha: \"%s\"\n", senha);
  printf ("Confirmacao: \"%p\"\n", confirmacao);
  printf ("Confirmacao: \"%s\"\n", confirmacao);

  return OK;
}

/* $RCSfile$ */
