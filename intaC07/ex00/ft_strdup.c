/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:29:25 by olaaroub          #+#    #+#             */
/*   Updated: 2023/09/05 18:35:08 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (!nv)
		return (NULL);
	while (src[i])
	{
		nv[i] = src[i];
		i++;
	}
	nv[i] = '\0';
	return (nv);
}
