/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 12:28:34 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/16 15:13:10 by mreniere         ###   ########.fr       */
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

int		is_valid_char(char c)
{
	if (c == 43 || c == 45)
		return (0);
	else
		return (1);
}

int		base_is_ok(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i++])
	{
		if (!(is_valid_char(base[i])))
			return (0);
		j = 0;
		while (base[j++])
		{
			if (j != i && base[j] == base[i])
			{
				return (0);
			}
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
	if (base_is_ok(base))
	{
		if (nbr < 0)
		{
			n = -n;
			write(1, "-", 1);
		}
		putnbr_base_recursive(n, base, base_size);
	}
}
