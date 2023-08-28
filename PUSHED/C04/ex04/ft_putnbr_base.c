/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:27:02 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/27 18:17:36 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	valid_base(char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = len_base(str);
	if (str[0] == '\0' || len == 1)
		return (0);
	while (str[i])
	{
		if ((str[i] < 33 || str[i] == 127) || (str[i] == '+' || str[i] == '-'))
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		valid;
	int		len;
	long	nb;

	valid = valid_base(base);
	len = len_base(base);
	nb = nbr;
	if (valid == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
		if (nb < len)
			ft_putchar(base[nb]);
	}
}
