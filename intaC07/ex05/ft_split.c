/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:03:36 by olaaroub          #+#    #+#             */
/*   Updated: 2023/09/05 20:04:17 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && check_charset(*str, charset))
			str++;
		if (*str && !check_charset(*str, charset))
		{
			count++;
			while (*str && !check_charset(*str, charset))
				str++;
		}
	}
	return (count);
}

void	ft_copy(char *src, char *dest, char *charset)
{
	while (*src && !check_charset(*src, charset))
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**ptr;
	int		k;
	int		l;

	count = count_words(str, charset);
	ptr = (char **)malloc((count + 1) * sizeof(char *));
	if (!ptr)
		return (0);
	k = 0;
	while (*str && k < count)
	{
		while (check_charset(*str, charset) && *str)
			str++;
		l = 0;
		while (!check_charset(str[l], charset) && str[l])
			l++;
		ptr[k] = (char *)malloc((l + 1) * sizeof(char));
		ft_copy(str, ptr[k], charset);
		str += l;
		k++;
	}
	ptr[k] = 0;
	return (ptr);
}
