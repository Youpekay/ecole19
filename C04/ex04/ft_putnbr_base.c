/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:28:34 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 20:14:10 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		is_base_valid(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (str == 0 || ft_strlen(str) < 2)
		return (0);
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == '\r' || str[i] == ' ' ||
				str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (i < ft_strlen(str))
	{
		j = i + 1;
		while (j < ft_strlen(str))
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (1);
}

void	convert_base(unsigned int nb, char *base)
{
	unsigned int	size;

	size = ft_strlen(base);
	if (nb >= size)
		convert_base(nb / size, base);
	ft_putchar(base[nb % size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int negative;

	negative = 1;
	if (is_base_valid(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			convert_base(-nbr, base);
		}
		else
			convert_base(nbr, base);
	}
}
