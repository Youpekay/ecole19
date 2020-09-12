/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:31:58 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/12 16:17:06 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_swap_tab(int *tab, int pos1, int pos2)
{
	int tmp;

	tmp = tab[pos1];
	tab[pos1] = tab[pos2];
	tab[pos2] = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < size)
	{
		j = 0;
		while (j < size-1)
		{
			if(tab[j] > tab[j+1])
				ft_swap_tab(tab, j, j+1);

			j++;
		}
		i++;
	}
}
