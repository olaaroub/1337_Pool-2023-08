/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:08:50 by olaaroub          #+#    #+#             */
/*   Updated: 2023/09/05 18:24:01 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;
	int	range;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	new = malloc(sizeof(int) * range);
	if (!new)
		return (0);
	while (i < range)
	{
		new[i] = min + i;
		i++;
	}
	return (new);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!range)
	{
		*range = 0;
		return (-1);
	}
	*range = ft_range(min, max);
	return (len);
}
