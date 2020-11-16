/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 21:51:22 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/17 11:35:55 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	if (nb < 0)
		return (0);
	i = 1;
	fact = 1;
	while (i < (nb + 1))
		fact = fact * i++;
	return (fact);
}
