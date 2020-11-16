/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 20:09:31 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/10 18:04:58 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	show_result(char n1, char n2, char n3)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(n3);
	if (n1 != '7' || n2 != '8' || n3 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	while (num1 <= '9')
	{
		num2 = num1 + 1;
		while (num2 <= '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				show_result(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
