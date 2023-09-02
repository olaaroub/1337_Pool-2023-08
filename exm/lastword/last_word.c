/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:11:50 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/31 16:33:57 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	str_len(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return(i);
}


int main(int ac, char **av)
{
	int i;
	i = 0;
	if(ac == 2)
	{
		while(av[1][i])
			i++;
		i--;
		while(av[1][i] == 32 || av[1][i] == '\t')
			i--;
		while(av[1][i] != 32 && av[1][i] != '\t' && i >= 0)
			i--;
		i++;
		while(av[1][i] != 32 && av[1][i] != '\t' && av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
