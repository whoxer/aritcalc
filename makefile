# make file calc.c

CC=gcc
BIN=-o calc
WARN=-Wall -Werror
MATH=-lm
SRC=./*.c
all:
	@ echo 'compilando...'
	$(CC) $(SRC) -include calc.h $(BIN) $(WARN) $(MATH)
	@ echo 'sucesso.'
run:
	@ ./calc
clean:
	@ rm calc