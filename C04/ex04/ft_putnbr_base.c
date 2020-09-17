/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:28:34 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/17 17:18:38 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
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

void	putnbr_base_recursive(unsigned int nbr, char *base, unsigned int size)
{
	int		mod;

	mod = 0;
	if (nbr > size)
		putnbr_base_recursive(nbr / size, base, size);
	mod = nbr % size;
	write(1, &(base[(mod)]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_size;
	unsigned int	n;

	n = nbr;
	base_size = ft_strlen(base);
	if (is_base_ok(base))
	{
		if (nbr < 0)
		{
			n = -n;
			write(1, "-", 1);
		}
		putnbr_base_recursive(n, base, base_size);
	}
}
