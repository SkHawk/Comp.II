# Universidade Federal do Rio de Janeiro
# Escola Politecnica
# Departamento de Eletronica e de Computacao
# EEL270 - Computacao II - Turma 2017/2
# Prof. Marcelo Luiz Drumond Lanza
# Autor: Alexandre Alkmim Chamon
#
# $Author: alexandre.chamon $
# $Date: 2017/09/27 20:04:04 $
# $Log: Makefile,v $
# Revision 1.25  2017/09/27 20:04:04  alexandre.chamon
# Adicionado aula0602 ao Makefile
#
# Revision 1.24  2017/09/21 02:14:28  alexandre.chamon
# Adicionado aula0501e ao Makefile
#
# Revision 1.23  2017/09/21 01:18:37  alexandre.chamon
# Adicionado aula0501c ao Makefile
#
# Revision 1.22  2017/09/15 19:31:29  alexandre.chamon
# Adicionado aula0501b ao Makefile
#
# Revision 1.21  2017/09/15 16:57:13  alexandre.chamon
# Adicionado matematica.a ao Makefile
# Adicionado aula0502a ao Makefile
#
# Revision 1.20  2017/09/01 13:06:04  alexandre.chamon
# Inicializando o indice
#
# Revision 1.19  2017/09/01 12:55:36  alexandre.chamon
# Adicionado aula0401c ao Makefile
#
# Revision 1.18  2017/09/01 03:10:40  alexandre.chamon
# Adicionado aula0401b ao Makefile
#
# Revision 1.17  2017/09/01 02:47:19  alexandre.chamon
# Adicionado aula0401a ao Makefile
#
# Revision 1.16  2017/08/30 17:02:35  alexandre.chamon
# Adicionado aula0301d ao Makefile
#
# Revision 1.15  2017/08/30 16:53:26  alexandre.chamon
# Adicionado aula0301c ao Makefile
#
# Revision 1.14  2017/08/30 16:47:00  alexandre.chamon
# Adicionado aula0301b ao Makefile
#
# Revision 1.13  2017/08/30 16:34:45  alexandre.chamon
# Adicionado aula0301 ao Makefile
#
# Revision 1.12  2017/08/24 03:46:49  alexandre.chamon
# Adicionado aula0201d ao Makefile
#
# Revision 1.11  2017/08/24 03:35:07  alexandre.chamon
# Adicionado aula0201c ao Makefile
#
# Revision 1.10  2017/08/24 03:00:42  alexandre.chamon
# Adicionado aula0201b ao Makefile
#
# Revision 1.9  2017/08/24 02:32:45  alexandre.chamon
# Adicionado aula0201 ao Makefile
#
# Revision 1.8  2017/08/14 13:32:07  alexandre.chamon
# Usar a variavel AULA01 para os EXECS
#
# Revision 1.7  2017/08/14 02:34:02  alexandre.chamon
# Adicionado aula0107 ao Makefile
#
# Revision 1.6  2017/08/14 02:20:51  alexandre.chamon
# Adicionado aula0106 ao Makefile
#
# Revision 1.5  2017/08/14 02:07:25  alexandre.chamon
# Adicionado aula0105 ao Makefile
#
# Revision 1.4  2017/08/14 01:44:28  alexandre.chamon
# Adicionado aula0104 ao Makefile
#
# Revision 1.3  2017/08/12 03:25:04  alexandre.chamon
# Adicionado aula0103 ao Makefile
#
# Revision 1.2  2017/08/12 02:52:26  alexandre.chamon
# Adicionado aula0102 ao Makefile
#
# Revision 1.1  2017/08/12 02:12:15  alexandre.chamon
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

#-----Aula 03-----#

AULA0302AOBJS = aula0301a.o aula0302.o
AULA0302BOBJS = aula0301b.o aula0302.o
AULA0302COBJS = aula0301c.o aula0302.o
AULA0302DOBJS = aula0301d.o aula0302.o

#-----Aula 04-----#

AULA0402AOBJS = aula0401a.o aula0402.o
AULA0402BOBJS = aula0401b.o aula0402.o
AULA0402COBJS = aula0401c.o aula0402.o
AULA0402DOBJS = aula0401d.o aula0402.o

#-----Aula 05-----#

AULA0502AOBJS = aula0501a.o aula0502.o
AULA0502BOBJS = aula0501b.o aula0502.o
AULA0502COBJS = aula0501c.o aula0502.o
AULA0502DOBJS = aula0501d.o aula0502.o
AULA0502EOBJS = aula0501e.o aula0502.o

#-----Aula 06-----#
AULA0602OBJS = aula0601.o aula0602.o

#-------LIBS------#

LIBMATEMATICAOBJS = aula0401a.o
LIBMATEMATICA = libmatematica.a
LIBS = $(LIBMATEMATICA) 


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

AULA03 = aula0302a\
			aula0302b\
			aula0302c\
			aula0302d

AULA04 = aula0402a\
			aula0402b\
			aula0402c\
			aula0402d

AULA05 = aula0502a\
			aula0502b\
			aula0502c\
			aula0502d\
			aula0502e

AULA06 = aula0602

EXECS = $(AULA01) $(AULA02) $(AULA03) $(AULA04) $(AULA05) $(AULA06)

ALL = $(EXECS)\
		$(LIBS)

# Regra Implicita
.c.o:
	$(CC) $(CFLAGS) -c $<

all: $(ALL)

aula01: $(AULA01)

aula02: $(AULA02)

aula03: $(AULA03)

aula04: $(AULA04)

aula05: $(AULA05)

aula06: $(AULA06)

libmatematica.a: $(LIBMATEMATICAOBJS)
	ar -r $@ $(LIBMATEMATICAOBJS)

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

aula0302a: $(AULA0302AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302AOBJS)

aula0302b: $(AULA0302BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302BOBJS)

aula0302c: $(AULA0302COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302COBJS)

aula0302d: $(AULA0302DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0302DOBJS)

aula0402a: $(AULA0402AOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402AOBJS)

aula0402b: $(AULA0402BOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402BOBJS)

aula0402c: $(AULA0402COBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402COBJS)

aula0402d: $(AULA0402DOBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0402DOBJS)

aula0502a: $(AULA0502AOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502AOBJS) -L. -lmatematica

aula0502b: $(AULA0502BOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502BOBJS) -L. -lmatematica

aula0502c: $(AULA0502COBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502COBJS) -L. -lmatematica

aula0502d: $(AULA0502DOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502DOBJS) -L. -lmatematica

aula0502e: $(AULA0502EOBJS) $(LIBMATEMATICA)
	$(LD) $(LFLAGS) -o $@ $(AULA0502EOBJS) -lm

aula0602: $(AULA0602OBJS)
	$(LD) $(LFLAGS) -o $@ $(AULA0602OBJS)

clean:
	rm -f *.o $(ALL)

# $RCSfile: Makefile,v $
