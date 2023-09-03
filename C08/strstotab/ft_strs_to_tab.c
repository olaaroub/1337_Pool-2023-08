/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:18:37 by olaaroub          #+#    #+#             */
/*   Updated: 2023/09/03 17:06:05 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

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

	i = 0;
	while (src[i])
		i++;
	nv = malloc((sizeof(char) * i ) + 1);
	if(!nv)
		return (NULL);
	i = 0;
	while (src[i])
	{
		nv[i] = src[i];
		i++;
	}
	nv[i] = '\0';
	return (nv);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *result;
	int	i;
	
	i = 0;
	result = malloc(sizeof(t_stock_str) * (ac +1));
	if(!result)
		return (NULL);
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].str = 0;
	return (result);
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
        return 1;
    }

    // Call ft_strs_to_tab to convert command line arguments to t_stock_str array
    struct s_stock_str *result = ft_strs_to_tab(argc - 1, argv + 1);

    if (!result)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Print the t_stock_str array
    for (int i = 0; i < argc - 1; i++)
    {
        printf("String %d:\n", i);
        printf("Size: %d\n", result[i].size);
        printf("String: %s\n", result[i].str);
        printf("Copy: %s\n", result[i].copy);
    }

    // Free the allocated memory
    for (int i = 0; i < argc - 1; i++)
    {
        free(result[i].copy);
    }
    free(result);

    return 0;
}
	
