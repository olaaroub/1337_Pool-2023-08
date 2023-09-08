/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:43:50 by olaaroub          #+#    #+#             */
/*   Updated: 2023/09/07 17:40:04 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*arr;
	int	i;

	arr = (int *) malloc(length * sizeof(int));
	if (!arr)
		return (0);
	i = -1;
	while (++i < length)
		arr[i] = (*f)(tab[i]);
	return (arr);
}
