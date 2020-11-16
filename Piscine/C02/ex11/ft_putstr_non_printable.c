/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 14:38:24 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/13 19:18:55 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	conv_to_hex(int val)
{
	char hex_val;

	hex_val = '0';
	if (val == 10)
		hex_val = 'a';
	else if (val == 11)
		hex_val = 'b';
	else if (val == 12)
		hex_val = 'c';
	else if (val == 13)
		hex_val = 'd';
	else if (val == 14)
		hex_val = 'e';
	else if (val == 15)
		hex_val = 'f';
	return (hex_val);
}

int		deci_to_hex(int deci, char *hex)
{
	char	c_tmp;
	int		i;
	int		j;
	int		hex_mod;

	i = 0;
	j = 0;
	while (deci > 0)
	{
		hex_mod = deci % 16;
		hex[i] = conv_to_hex(hex_mod);
		deci /= 16;
		i++;
	}
	while (j < (i / 2))
	{
		c_tmp = hex[j];
		hex[j] = hex[i - 1 - j];
		hex[i - 1 - j] = c_tmp;
		j++;
	}
	return (i);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		hex_size;
	char	hex[8];

	i = 0;
	hex_size = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			write(1, "\\", 1);
			write(1, "0", 1);
			hex_size = deci_to_hex((int)str[i], hex);
			write(1, hex, hex_size);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
