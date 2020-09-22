/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:11:44 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 13:34:34 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_ignored(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int		is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	int result;
	int negative;

	negative = 1;
	result = 0;
	while (is_ignored(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
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
