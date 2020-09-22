/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 09:35:08 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 10:04:54 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	nbr_item;
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	nbr_item = max - min - 1;
	if (!(result = malloc(nbr_item * sizeof(int))))
	{
		*range = 0;
		return (-1);
	}
	*range = result;
	i = 0;
	while (i <= nbr_item)
	{
		result[i] = min + i;
		i++;
	}
	return (nbr_item + 1);
}
