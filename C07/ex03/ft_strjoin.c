/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:36:16 by olaaroub          #+#    #+#             */
/*   Updated: 2023/09/05 19:57:41 by olaaroub         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_len(char **strs, int seplen, int size)
{
	int	f_len;
	int	i;

	i = 0;
	f_len = 0;
	while (i < size)
	{
		f_len += ft_strlen(strs[i]);
		f_len += seplen;
		i++;
	}
	f_len -= seplen;
	return (f_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		f_len;
	int		i;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	f_len = ft_final_len(strs, ft_strlen(sep), size);
	string = (char *)malloc((f_len + 1) * sizeof(char));
	if (!string)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(string, strs[i]);
		string += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_strlen(sep);
		}
		i++;
	}
	*string = '\0';
	return (string - f_len);
}
