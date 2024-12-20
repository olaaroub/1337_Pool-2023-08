/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaaroub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:30:10 by olaaroub          #+#    #+#             */
/*   Updated: 2023/08/19 12:14:50 by olaaroub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swp;

	i = 0;
	while (i < size / 2)
	{
		swp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swp;
		i++;
	}
}	
