/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:19:59 by olaaroub          #+#    #+#             */
/*   Updated: 2023/09/07 17:40:34 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;
	int	all_eq;
	int	tmpv;

	if (length < 2)
		return (1);
	asc = 1;
	desc = 1;
	all_eq = 1;
	i = 0;
	while (i < length - 1)
	{
		tmpv = (*f)(tab[i], tab[i + 1]);
		if (tmpv > 0)
			asc = 0;
		if (tmpv != 0)
			all_eq = 0;
		if (tmpv < 0)
			desc = 0;
		i++;
	}	
	return (asc ^ desc ^ all_eq);
}
