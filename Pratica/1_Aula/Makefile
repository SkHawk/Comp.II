# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2017/2
# Prof. Marcelo Luiz Drumond Lanza
# Autor: Alexandre Alkmim Chamon
#
# $Author: chamon $
# $Date: 2017/08/14 02:38:10 $
# $Log: Makefile,v $
# Revision 1.7  2017/08/14 02:38:10  chamon
# Adicionado aula0107 ao Makefile
#
# Revision 1.6  2017/08/14 02:24:59  chamon
# Adicionado aula0106 ao Makefile
#
# Revision 1.5  2017/08/14 02:11:34  chamon
# Adicionado aula0105 ao Makefile
#
# Revision 1.4  2017/08/14 01:48:37  chamon
# Adicionado aula0104 ao Makefile
#
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
AULA0105OBJS = aula0105.o
AULA0106OBJS = aula0106.o
AULA0107OBJS = aula0107.o

AULA01 = aula0101\
			aula0102\
			aula0103\
			aula0104\
			aula0105\
			aula0106\
			aula0107

EXECS = aula0101\
			aula0102\
			aula0103\
			aula0104\
			aula0105\
			aula0106\
			aula0107

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

aula0105: $(AULA0105OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0105OBJS)

aula0106: $(AULA0106OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0106OBJS)

aula0107: $(AULA0107OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0107OBJS)

clean:
	rm -f *.o $(EXECS)

# $RCSfile: Makefile,v $
