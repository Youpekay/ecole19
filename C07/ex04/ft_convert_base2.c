/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 20:14:48 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 20:59:58 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

char	*convert_base(unsigned int nb, char *base)
{
	unsigned int	size;
	int i;
	char *result;
	unsigned int nb_tmp;

	i = 0;
	size = ft_strlen(base);
	/*
	if (nb >= size)
		convert_base(nb / size, base);
	ft_putchar(base[nb % size]);
	*/

	nb_tmp = nb;
	while(nb_tmp < size)
	{
		nb_tmp /= size;
		i++;
	}
	result = malloc(i * sizeof(char));
	while (i--)
	{
		result[i] = base[nb % size];
		nb /= size;
	}
	return (result);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	char *result;

	if (is_base_valid(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			result = convert_base(-nbr, base);
		}
		else
			result = convert_base(nbr, base);
	}
	else
	{
		result = "BEURK";
	}
	
	return (result);
}