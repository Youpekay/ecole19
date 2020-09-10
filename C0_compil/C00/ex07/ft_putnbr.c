/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 10:42:45 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/10 16:11:11 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	result;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	result = nb % 10 + 48;
	ft_putchar(result);
}

int		main(void)
{
	ft_putnbr(-144);
	return 0;
}
