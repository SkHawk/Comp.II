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
#define SENHAS_DIFERENTES		1

int
main (int argc, char **argv)
{
  char senha [COMPRIMENTO_SENHA];
  char confirmacao [COMPRIMENTO_SENHA];
  char *temporaria;

  /* if (argc ... */

  strcpy (senha, temporaria =  getpass ("Senha:"));
  memset (temporaria, 0x00, strlen (senha));
  
  strcpy (confirmacao, temporaria = getpass ("Confirmacao:"));
  memset (temporaria, 0x00, strlen (confirmacao));

  if (strcmp (senha, confirmacao) != 0)
  {
    printf ("Senhas diferentes\n");
    exit (SENHAS_DIFERENTES);
  }

  printf ("Senha plana: \"%s\"\n", senha);
  printf ("Salt: \"%s\"\n", argv [1]);
  printf ("Senha cifrada: \"%s\"\n", crypt (senha, argv [1]));
  return OK;
}

/* $RCSfile$ */
