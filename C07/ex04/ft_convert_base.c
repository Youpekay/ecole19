/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:36:32 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 20:58:23 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_putnbr_base(int nbr, char *base);
int		ft_strlen(char *str);
int		is_base_valid(char *str);

int		is_ignored(char c)
{
	return ((c > 8 && c < 14) || c == 32 || c == 43);
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
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative *= -1;
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int result;
	char *result_ch;
	
	result = ft_atoi_base(nbr, base_from);
	result_ch = ft_putnbr_base(result, base_to);

	return (result_ch);
}

int		main(void)
{
	printf("result : $%s$\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("result : $%s$\n", ft_convert_base("---------7fffffff", "0123456789abcdef", "01"));
	printf("result : $%s$\n", ft_convert_base("---+--0001023a", "0123456789", "0123456789"));
	printf("result : $%s$\n", ft_convert_base("-0", "0123456789", "abcdefghij"));

	return (0);
}