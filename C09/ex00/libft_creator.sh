# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 17:05:15 by olaaroub          #+#    #+#              #
#    Updated: 2023/09/06 17:05:38 by olaaroub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cc -Wall -Wextra -Werror -c *.c
ar rcs libft.a *.o
rm -r *.o
