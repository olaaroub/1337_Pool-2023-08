/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:34:59 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/26 14:18:45 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	dl = i;
	sl = ft_strlen(src);
	if (size == 0 || size <= dl)
		return (sl + size);
	while (src[j] != '\0' && j < size - dl - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dl + sl);
}
