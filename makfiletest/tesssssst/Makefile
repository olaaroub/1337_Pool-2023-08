
CC = CC
FLAGS	= -Wall -Werror -Wextra -I includes
AR = ar crs
RM = rm -f
LIB = libft.a

all: $(LIB)

$(LIB):
	$(CC) $(FLAGS) -c 
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIB)

re: fclean all
