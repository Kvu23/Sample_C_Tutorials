CC = gcc
CFLAGS = -g -Wall -Werror -std=c17
APPNAME = output
OBJ = tut42.o
LIB = # add any library if any here

all: ${APPNAME}

${APPNAME}:${OBJ}
	${CC} -o $@ $^ ${LIB}

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ} ${APPNAME}