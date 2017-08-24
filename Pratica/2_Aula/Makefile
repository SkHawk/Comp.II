# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2017/2
# Prof. Marcelo Luiz Drumond Lanza
# Autor: Alexandre Alkmim Chamon
#
# $Author: chamon $
# $Date: 2017/08/24 03:50:48 $
# $Log: Makefile,v $
# Revision 1.12  2017/08/24 03:50:48  chamon
# Adicionado aula0201d ao Makefile
#
# Revision 1.11  2017/08/24 03:39:06  chamon
# Adicionado aula0201c ao Makefile
#
# Revision 1.10  2017/08/24 03:04:42  chamon
# Adicionado aula0201b ao Makefile
#
# Revision 1.9  2017/08/24 02:40:35  chamon
# Adicionado aula0201 ao Makefile
#
# Revision 1.8  2017/08/14 13:32:07  chamon
# Usar a variavel AULA01 para os EXECS
#
# Revision 1.7  2017/08/14 02:34:02  chamon
# Adicionado aula0107 ao Makefile
#
# Revision 1.6  2017/08/14 02:20:51  chamon
# Adicionado aula0106 ao Makefile
#
# Revision 1.5  2017/08/14 02:07:25  chamon
# Adicionado aula0105 ao Makefile
#
# Revision 1.4  2017/08/14 01:44:28  chamon
# Adicionado aula0104 ao Makefile
#
# Revision 1.3  2017/08/12 03:25:04  chamon
# Adicionado aula0103 ao Makefile
#
# Revision 1.2  2017/08/12 02:52:26  chamon
# Adicionado aula0102 ao Makefile
#
# Revision 1.1  2017/08/12 02:12:15  chamon
# Initial revision
#

CC = gcc 
LD = gcc

CFLAGS = -Wall -std=c99 -ansi
LFLAGS = -Wall -std=c99 -ansi

#-----Aula 01-----#

AULA0101OBJS = aula0101.o
AULA0102OBJS = aula0102.o
AULA0103OBJS = aula0103.o
AULA0104OBJS = aula0104.o
AULA0105OBJS = aula0105.o
AULA0106OBJS = aula0106.o
AULA0107OBJS = aula0107.o

#-----Aula 02-----#

AULA0202AOBJS = aula0201a.o aula0202.o
AULA0202BOBJS = aula0201b.o aula0202.o
AULA0202COBJS = aula0201c.o aula0202.o
AULA0202DOBJS = aula0201d.o aula0202.o

AULA01 = aula0101\
			aula0102\
			aula0103\
			aula0104\
			aula0105\
			aula0106\
			aula0107

AULA02 = aula0202a\
			aula0202b\
			aula0202c\
			aula0202d

EXECS = $(AULA01) $(AULA02)

# Regra Implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(EXECS)

aula01: $(AULA01)

aula02: $(AULA02)

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

aula0202a: $(AULA0202AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202AOBJS)

aula0202b: $(AULA0202BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202BOBJS)

aula0202c: $(AULA0202COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202COBJS)

aula0202d: $(AULA0202DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0202DOBJS)

clean:
	rm -f *.o $(EXECS)

# $RCSfile: Makefile,v $
