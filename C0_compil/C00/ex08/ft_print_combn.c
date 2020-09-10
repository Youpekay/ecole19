/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 15:57:53 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/10 17:04:49 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char nums[n];
	int i;

	i = 0;
	nums[0] = 0;

	while (i < n)
	{
		nums[i+] = nums[
		i++;
	}
}

int		main(void)
{
	ft_print_combn(9);
}

