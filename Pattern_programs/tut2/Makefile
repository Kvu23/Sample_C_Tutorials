CC = gcc
CFLAGS = -g -Wall -Werror -std=c17
APPNAME = output
OBJ = tut2.o

all: ${APPNAME}

${APPNAME}:${OBJ}
	${CC} -o $@ $^

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ} ${APPNAME}