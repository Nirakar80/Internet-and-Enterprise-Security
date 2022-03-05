CC = gcc

INCS = -I.
LIBS = -L./Static
DYLIBS = -L./Dynamic


functions.o:	Sources/functions.c Headers/functions.h
				${CC} ${INCS} -c functions.c
main.o:			Sources/main.c Headers/functions.h
				${CC} ${INCS} -c main.c
main:			Sources/main.o	Sources/functions.o
				${CC} Sources/functions.o Sources/main.o -o Sources/main
cleam:
				rm Sources/functions.o Sources/main.o
