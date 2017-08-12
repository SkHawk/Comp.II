# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2017/2
# Prof. Marcelo Luiz Drumond Lanza
# Autor: Alexandre Alkmim Chamon
#
# $Author: chamon $
# $Date: 2017/08/12 03:29:15 $
# $Log: Makefile,v $
# Revision 1.3  2017/08/12 03:29:15  chamon
# Adicionado aula0103 ao Makefile
#
# Revision 1.2  2017/08/12 02:56:37  chamon
# Adicionado aula0102 ao Makefile
#
# Revision 1.1  2017/08/12 02:16:25  chamon
# Initial revision
#

CC = gcc 
LD = gcc

CFLAGS = -Wall -std=c99 -ansi
LFLAGS = -Wall -std=c99 -ansi

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
AULA0104OBJS = aula0104.o

AULA01 = aula0101\
			aula0102\
			aula0103\
			aula0104

EXECS = aula0101\
			aula0102\
			aula0103\
			aula0104

# Regra Implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(EXECS)

aula01: $(AULA01)

aula0101: $(AULA0101OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0101OBJS)

aula0102: $(AULA0102OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0102OBJS)

aula0103: $(AULA0103OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0103OBJS)

aula0104: $(AULA0104OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0104OBJS)

clean:
	rm -f *.o $(EXECS)

# $RCSfile: Makefile,v $
