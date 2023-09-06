CC = cc
CFLAGS = -Wall -Wextra -Werror

all: my_prog

my_prog: main.o functions.o
	CC $(CFLAGS) main.o functions.o -o my_prog

main.o: main.c
	CC $(CFLAGS) -c main.c

functions.o: functions.c
	CC $(CFLAGS) -c functions.c

fclean: 
	rm -f main.o functions.o my_prog
