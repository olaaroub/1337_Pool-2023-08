# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 17:07:05 by olaaroub          #+#    #+#              #
#    Updated: 2023/09/06 17:07:14 by olaaroub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS	= -Wall -Werror -Wextra -I includes
RM = rm -f
LIB = libft.a

all: $(LIB)

$(LIB):
	$(CC) $(FLAGS) -c srcs/ft_putchar.c -o srcs/ft_putchar.o
	$(CC) $(FLAGS) -c srcs/ft_swap.c -o srcs/ft_swap.o
	$(CC) $(FLAGS) -c srcs/ft_putstr.c -o srcs/ft_putstr.o
	$(CC) $(FLAGS) -c srcs/ft_strlen.c -o srcs/ft_strlen.o
	$(CC) $(FLAGS) -c srcs/ft_strcmp.c -o srcs/ft_strcmp.o
	ar rcs $(LIB) srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

clean:
	$(RM) srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o

fclean:
	$(RM) $(LIB)
