CC = gcc-13
CFLAGS = -g -Wall -std=c17
APPNAME = output
SRC = tut13.c
OBJ = $(SRC:.c=.o)
LIB = # add any library if any here

all: ${APPNAME}

${APPNAME}:${OBJ}
	${CC} -o $@ $^ ${LIB}

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJ} ${APPNAME}
