/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:12:45 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/30 13:40:43 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	ft_size(int min, int max)
{
	int i;
	
	i = 0;
	if(min >= max)
		return(-1);
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}


int	*ft_range(int min, int max)
{
	int	*new;
	int	i;
	int	len;

	i = 0;
	len = ft_size(min, max);
	if (len < 0)
		return(0);
	new = malloc(sizeof(int) * len);
	if(!new)
		return(0);
	while(min < max)
	{
		new[i] = min;
		i++;
		min++;
	}
	return (new);
}

int	main()
{
	int i = 0;
	int *new;

	new = ft_range(0, 9);
	if (new)
	{
		while(i < ft_size(0, 9))
		{
			printf("%d", new[i]);
			i++;
		}
		free(new);
	}
	else
		printf("memory not allocated\n");
	
	return (0);
}

