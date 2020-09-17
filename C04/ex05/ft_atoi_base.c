/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:33:45 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/17 09:40:43 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		is_ignored(char c)
{
	return ((c > 8 && c < 14) || c == 32 || c == 43);
}

int		is_base_valid(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i++])
	{
		j = i + 1;
		if (base[i] == 43 || base[i] == 45 ||
				base[i] == 32 || (base[i] > 8 && base[i] < 14))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
	}
	return (1);
}

int		give_index_base(char *base, char tofind)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == tofind)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int size;
	int result;
	int negative;
	int char_index;

	negative = 1;
	size = ft_strlen(base);
	result = 0;
	if (!is_base_valid(base))
		return (0);
	while (is_ignored(*str))
		str++;
	while (*str == 45)
	{
		negative = -negative;
		str++;
	}
	while ((char_index = give_index_base(base, *str)) != -1)
	{
		result *= size;
		result += char_index;
		str++;
	}
	return (result * negative);
}
