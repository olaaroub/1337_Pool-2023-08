/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 22:57:52 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/31 23:13:01 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}

int main(int ac, char **av)
{
	char *tmp;

	if(ac == 3)
	{
		tmp = av[1];
		while(*tmp && *av[2])
		{
			while(*tmp == *av[2] && (*tmp && *av[2]))
			{
				tmp++;
				av[2]++;
			}
			av[2]++;
		}
		if (!(*tmp))
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}
