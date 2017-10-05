/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e Computacao
 * EEL270 - Computacao II - Turma 2017/1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/09/27 20:04:04 $
 * $Log: aula0602.c,v $
 * Revision 1.1  2017/09/27 20:04:04  alexandre.chamon
 * Initial revision
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "aula0601.h"

#define OK 											0
#define NUMERO_ARGUMENTOS_INVALIDO 			1
#define ARGUMENTO_INVALIDO 					2

#define NUMERO_ARGUMENTOS 						9

#define EOS 										'\0'



int
main (int argc, char *argv[])
{
	int argumentos;
	char *validacao;
	unsigned linhas, colunas, ordenadaEsquerda, abscissaEsquerda,
				ordenadaDireita, abscissaDireita, ordenadaInterna,
				abscissaInterna;
	unsigned termos [NUMERO_ARGUMENTOS-1];
	unsigned testeErro;
	tipoPixel monitor [NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS];

	if (argc != NUMERO_ARGUMENTOS)
	{
		printf ("USO: %s <A> <L> <X1> <Y1> <X2> <Y2> <Xi> <Yi>\n", argv[0]);
		printf ("\tA - Altura (linhas)\n");
		printf ("\tL - Largura (colunas)\n");
		printf ("\tX1 - Ordenada Superior Esquerda do Retangulo\n");
		printf ("\tY1 - Abscissa Superior Esquerda do Retangulo\n");
		printf ("\tX2 - Ordenada Inferior Direita do Retangulo\n");
		printf ("\tY2 - Abscissa Inferior Direita do Retangulo\n");
		printf ("\tXi - Ordenada de um ponto interno ao retangulo\n");
		printf ("\tYi - Abscissa de um ponto interno ao retangulo\n");
		printf ("\t- Todos os argumentos devem ser positivos (x > 0)\n");
		exit(NUMERO_ARGUMENTOS_INVALIDO);
	}

	for (argumentos = 1; argumentos < argc; argumentos++)
	{
		if (argv[argumentos][0] == '-')
		{
			printf ("\t- Todos os argumentos devem ser positivos (x > 0)\n");
			exit(ARGUMENTO_INVALIDO);
		}

		termos[argumentos-1] = strtoul (argv[argumentos], &validacao, 10);

		if (*validacao != EOS)
		{
			printf ("Primeiro caractere invalido: %c\n", validacao[0]);
			exit(ARGUMENTO_INVALIDO);
		}
	}

	linhas = termos[0];
	colunas = termos[1];
	ordenadaEsquerda = termos[3];
	abscissaEsquerda = termos[2];
	ordenadaDireita = termos[5];
	abscissaDireita = termos[4];
	ordenadaInterna = termos[7];
	abscissaInterna = termos[6];
	
	testeErro = LimparMonitor (monitor, linhas, colunas);

	if (testeErro != ok)
	{
		printf ("Ocorreu um erro na funcao LimparMonitor!");
		printf ("Dimensoes do monitor invalidas!");
		exit(testeErro);
	}

	testeErro = DesenharRetangulo (monitor, linhas, colunas, ordenadaEsquerda, abscissaEsquerda,
												ordenadaDireita, abscissaDireita);
	
	if (testeErro != ok)
	{
		printf ("Ocorreu um erro na funcao DesenharRetangulo!");
		printf ("Coordenadas do retangulo invalidas!");
		exit(testeErro);
	}

	testeErro = PreencherPoligono (monitor, linhas, colunas, ordenadaInterna-1, abscissaInterna-1);

	if (testeErro != ok)
	{
		printf ("Ocorreu um erro na funcao PreencherPoligono!");
		printf ("Coordenadas dos pontos internos invalidas!");
		exit(testeErro);
	}

	printf ("\n");

	return OK;
}
/*$RCSfile: aula0602.c,v $*/
