/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:29:25 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/30 11:10:44 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*nv;
	int		len;

	i = 0;
	len = ft_strlen(src);
	nv = malloc(sizeof(char) * len + 1);
	if(!nv)
		return (NULL);
	while (src[i])
	{
		nv[i] = src[i];
		i++;
	}
	nv[i] = '\0';
	return (nv);
}

int	main()
{
	char name[] = "oussama laaroubi ";
	printf("%s", ft_strdup(name));
}

