CC = gcc-13
CFLAGS = -g -Wall -Werror -std=c17
APPNAME = output
OBJ = tut37.o

all: ${APPNAME}

${APPNAME}:${OBJ}
	${CC} -o $@ $^

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ} ${APPNAME}