# Cabeçalho padrão:
# 	Universidade Federal do Rio de Janeiro
# 	Escola Politecnica
# 	Departamento de Eletronica e de Computação
# 	EEL270 - Computacao II - Turma 2017/2
# 	Prof. Marcelo Luiz Drumond Lanza
#
# 	$Author$
# 	$Date$
# 	$Log$

CC = gcc # definir compilador
LD = gcc # definir link-editor

CFLAGS = -Wall -std=c99 -ansi # definir flags do compilador
LFLAGS = -Wall -std=c99 -ansi # definir flags do link-editor

EXE01OBJS = exemplo_001.o

EXECS = exemplo_001\ # o \enter funciona para continuar escrevendo na "mesma linha"
	exemplo_002

###### Regra Implicita ######
.c.o:
	$(CC) $(CFLAGS) -c $<
#############################

all: $(EXECS) # o makefile procura o primeiro rotulo (fisicamente no arquivo Makefile) e o executa


exemplo_001: $(EXE01OBJS)
	$(LD) $(LFLAGS) -o $@ $(EXE01OBJS) # $@ é o objetivo mais proximo (exemplo_001)

clean:
	rm -f *.o $(EXECS)

# $RCSfile$
