CC = cc
CFLAGS = -Wall -Wextra -Werror -I
AR = ar rcs
RM = rm -f
SRCS = main.c functions.c
OBJ = $(SRCS:=.o)
LIB = libft.a

all: $(LIB)

$(LIB): $(OBJ)
	$(AR) $(LIB) $(OBJ)



%.o: %.c
	CC $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(LIB)

fclean:
	$(RM) $(LIB)
