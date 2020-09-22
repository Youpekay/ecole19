/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:11:44 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 13:16:58 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (*str == 45)
			negative *= -1;
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
