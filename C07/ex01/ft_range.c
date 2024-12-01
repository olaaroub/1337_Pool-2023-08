/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:12:45 by olaaroub          #+#    #+#             */
/*   Updated: 2023/09/05 18:31:28 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (0);
	new = malloc(sizeof(int) * len);
	if (!new)
		return (0);
	while (min < max)
	{
		new[i] = min;
		i++;
		min++;
	}
	return (new);
}
