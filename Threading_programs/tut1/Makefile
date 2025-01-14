CC = gcc
CFLAGS = -g -Wall -Werror -std=c17
APPNAME = output
OBJ = tut1.o
LIB = -lpthread

all: ${APPNAME}

${APPNAME}:${OBJ}
	${CC} -o $@ $^ ${LIB}

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@ 

clean:
	${RM} ${OBJ} ${APPNAME}