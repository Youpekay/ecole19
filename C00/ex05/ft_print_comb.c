/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 20:09:31 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/09 22:05:58 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb();

int main(void)
{
	ft_print_comb();
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
				write(1, &num1, 1);
				write(1, &num2, 1);
				write(1, &num3, 1);
				if(num1 != '7' || num2 != '8' || num1 != '7')
				   	write(1, ", ", 1);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
