/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 09:19:29 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/12 14:43:28 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	ft_display_char(int a, int b, int y, int x)
{
	if (b == 1 || b == y)
	{
		if (a == 1)
			ft_putchar("A");
		else if (a == x)
			ft_putchar("C");
		else
			ft_putchar("B");
	}
	else
	{
		if (a == 1 || a == x)
			ft_putchar("B");
		else
			ft_putchar(" ");
	}
}

void	rush(int x, int y)
{
	int nb1;
	int nb2;

	nb1 = 1;
	nb2 = 1;
	while (nb2 <= y)
	{
		nb1 = 1;
		while (nb1 <= x)
		{
			ft_display_char(nb1, nb2, y, x);
			nb1++;
		}
		ft_putchar("\n");
		nb2++;
	}
}
