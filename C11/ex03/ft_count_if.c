/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 15:28:51 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/28 16:42:24 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	mod;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		mod = (*f)(tab[i]);
		if (mod != 0)
			count++;
		i++;
	}
	return (count);
}