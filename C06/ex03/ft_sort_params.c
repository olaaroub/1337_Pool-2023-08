/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:42:10 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/30 13:46:41 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &(str[i]), 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0' && s1[i] != '\0' && (s1[i] - s2[i] == 0))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort_strings(int ac, char **av)
{
	int		j;
	int		y;
	char	*swap;

	j = 1;
	while (j < ac - 1)
	{
		y = j + 1;
		while (y < ac)
		{
			if (ft_strcmp(av[j], av[y]) > 0)
			{
				swap = av[j];
				av[j] = av[y];
				av[y] = swap;
			}
			y++;
		}
		j++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	sort_strings(ac, av);
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
