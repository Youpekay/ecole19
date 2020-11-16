/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 09:08:59 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/25 18:59:19 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*result;

	if (min >= max)
		return (0);
	range = max - (min - 1);
	if (!(result = malloc(range * sizeof(int))))
		return (0);
	i = 0;
	while (i <= range)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
