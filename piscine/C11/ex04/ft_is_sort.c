/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:27:50 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/29 13:33:16 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		neg;
	int		pos;

	i = 0;
	neg = 1;
	pos = 1;
	if (length == 1 || length == 0)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			neg++;
		else if ((*f)(tab[i], tab[i + 1]) > 0)
			pos++;
		else
		{
			pos++;
			neg++;
		}
		i++;
	}
	if (pos == length || neg == length)
		return (1);
	return (0);
}
