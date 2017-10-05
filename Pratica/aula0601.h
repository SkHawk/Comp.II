/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e Computacao
 * EEL270 - Computacao II - Turma 2017/1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Alexandre Alkmim Chamon
 *
 * $Author: alexandre.chamon $
 * $Date: 2017/09/27 20:04:04 $
 * $Log: aula0601.h,v $
 * Revision 1.1  2017/09/27 20:04:04  alexandre.chamon
 * Initial revision
 *
 *
 */

#ifndef _AULA0601_
#define _AULA0601_ "@(#)aula0601.h $Revision: 1.1 $"

#define ACESO 									'1'
#define APAGADO 								'0'
#define NUMERO_MAXIMO_LINHAS				25
#define NUMERO_MAXIMO_COLUNAS				80

typedef enum {ok, maximoLinhasInvalido, maximoColunasInvalido,
													abscissaEsquerdaInvalida, abscissaDireitaInvalida,
													ordenadaEsquerdaInvalida,ordenadaDireitaInvalida,
													linhaInvalida, colunaInvalida} tipoErros;

typedef enum {aceso, apagado} tipoPixel;


tipoErros
MostrarMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ] [NUMERO_MAXIMO_COLUNAS ],
													unsigned maximoLinhas, unsigned maximoColunas);

tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS] [NUMERO_MAXIMO_COLUNAS],
													unsigned maximoLinhas, unsigned maximoColunas);

tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS],
													unsigned maximoLinhas, unsigned maximoColunas,
													unsigned ordenadaEsquerda, unsigned abscissaEsquerda,
													unsigned ordenadaDireita, unsigned abscissaDireita);

tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS],
													unsigned maximoLinhas, unsigned maximoColunas,
													unsigned linha, unsigned coluna);

#endif

/*$RCSfile: aula0601.h,v $*/
