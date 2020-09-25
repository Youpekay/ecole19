/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 09:35:08 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/25 19:01:22 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	max -= min;
	*range = malloc(max * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max);
}
