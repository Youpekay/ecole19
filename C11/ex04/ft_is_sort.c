/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:27:50 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/28 20:41:20 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int r1;
	int r2;

	i = 1;
	while (i < length && !(r1 = (*f)(tab[i - 1], tab[i])))
		i++;
	while (i < length)
	{
		r2 = (*f)(tab[i - 1], tab[i]);
		if ((r1 < 0 && r2 > 0) || (r1 > 0 && r2 < 0))
			return (0);
		i++;
	}
	return (1);
}
