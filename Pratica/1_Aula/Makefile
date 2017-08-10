# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2017/2
# Prof. Marcelo Luiz Drumond Lanza
# Autor: Alexandre Alkmim Chamon
#
# $Author$
# $Date$
# $Log$

CC = gcc 
LD = gcc

CFLAGS = -Wall -std=c99 -ansi
LFLAGS = -Wall -std=c99 -ansi

AULA0101OBJS = aula0101.o
AULA01 = aula0101
EXECS = aula0101

# Regra Implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(EXECS)

aula01: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)

$(AULA01): $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)

clean:
	rm -f *.o $(EXECS)

# $RCSfile$
