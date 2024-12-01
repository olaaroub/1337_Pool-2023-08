/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:07:28 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/20 22:01:08 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	ft_strlowcase(str);
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
				j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
