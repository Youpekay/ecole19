/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 08:35:02 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/12 15:30:45 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	tmp = 0;
	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[size-1-i];	
		tab[size-1-i] = tab[i];
		tab[i] = tmp;
		
		i++;
	}

}
