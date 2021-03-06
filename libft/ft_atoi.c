/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 23:44:12 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/30 12:40:34 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isoverflow(unsigned long res, int pos)
{
	if (pos == 1 && res > LNG_MAX)
		return (-1);
	if (res > LNG_MIN)
		return (0);
	return (1);
}

int			ft_atoi(const char *nptr)
{
	int		positive;
	long	result;
	int		isoverflow_result;

	positive = 1;
	result = 0;
	while (*nptr && ((*nptr >= 9 && *nptr <= 13) || *nptr == ' '))
		++nptr;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			positive = -1;
	while (ft_isdigit(*nptr))
	{
		result = result * 10 + (*nptr++ - '0');
		isoverflow_result = isoverflow(result, positive);
		if (!isoverflow_result || isoverflow_result == -1)
			return (isoverflow_result);
	}
	return ((int)(result * positive));
}
