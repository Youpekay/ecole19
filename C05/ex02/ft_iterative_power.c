/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 11:38:01 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/17 14:52:35 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power > 0)
	{
		while (power-- > 0)
			result *= nb;
	}
	else if (power == 0)
		return (1);
	else 
		return (0);
	return (result);
}
