CC = gcc
CFLAGS = -g -Wall -Werror -std=c2x
APPNAME = output
OBJ = tut6.o

all: ${APPNAME}

${APPNAME}:${OBJ}
	${CC} -o $@ $^

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ} ${APPNAME}