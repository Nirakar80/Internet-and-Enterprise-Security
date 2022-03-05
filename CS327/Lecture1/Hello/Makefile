CC=gcc
EXE=hello hello2 hello3
hello.o: hello.c
 ${CC} -c hello.c
hello: hello.o
 ${CC} hello.o -o hello
hello2.o: hello2.c
 ${CC} -c hello2.c
hello2: hello2.o
 ${CC} hello2.o -o hello2
hello3.o: hello3.c functions.h
 ${CC} -c hello3.c
functions.o: functions.c functions.h
 ${CC} -c functions.c
hello3: hello3.o functions.o
 ${CC} hello3.o functions.o -o hello3
clean:
 rm *.o ${EXE}
