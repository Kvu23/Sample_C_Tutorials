CC = gcc
CFLAGS = -g -Wall -Werror -std=c17
APPNAME = output
OBJ = tut34.o
LIBS += -lm

all: ${APPNAME}

${APPNAME}:${OBJ}
	${CC} -o $@ $^ ${LIBS}

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ} ${APPNAME}