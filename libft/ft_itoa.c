/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 08:42:51 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/26 00:03:23 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_n_len(int nbr)
{
	size_t len;

	len = 1;
	if (nbr < 0)
		len++;
	while (nbr /= 10)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	n_len;
	char	*str;
	long	nbr;

	i = 0;
	nbr = n;
	n_len = get_n_len(nbr);
	if (!(str = (char *)malloc(sizeof(char) * (n_len + 1))))
		return (NULL);
	str[n_len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
		i = 1;
	}
	while (n_len-- - i)
	{
		str[n_len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
