/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:17:09 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/31 15:03:48 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	long v1;
	long v2;
	long res;

	if(ac == 4)
	{
		v1 = ft_atoi(av[1]);
		v2 = ft_atoi(av[3]);
		if(*av[2] == '+')
			res = v1 + v2;
		else if (*av[2] == '-')
			res = v1 - v2;
		else if(*av[2] == '*')
			res = v1 * v2;
		else if(*av[2] == '/')
			res = v1 / v2;
		else if(*av[2] == '%')
			res = v1 % v2;
		if(res >= -2147483648 && res <= 2147483647)
			printf("%d", (int)res);
	}
	printf("\n");
	return (0);
}
