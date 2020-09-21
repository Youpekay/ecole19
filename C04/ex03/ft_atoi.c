/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:11:44 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/21 20:12:55 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_ignored(char c)
{
	return ((c > 8 && c < 14) || c == 32);
}

int		is_numeric(char c)
{
	return (c >= 48 && c <= 57);
}

int		ft_atoi(char *str)
{
	int result;
	int negative;

	negative = 1;
	result = 0;
	while (is_ignored(*str))
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*str == 43)
			negative = -negative;
		str++;
	}
	while (is_numeric(*str))
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (result * negative);
}

int		main(void)
{
	printf("%d", ft_atoi("      -+-++i+---+686688i01"));
	return (0);
}