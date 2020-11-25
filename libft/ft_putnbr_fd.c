/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:19:39 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/26 00:53:22 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int nbr)
{
	size_t	len;

	len = 1;
	if (nbr < 0)
		len++;
	while (nbr /= 10)
		len++;
	return (len);
}

void			ft_putnbr_fd(int n, int fd)
{
	size_t	i;
	size_t	n_len;
	char	n_str[11];
	long	nbr;

	i = 0;
	nbr = n;
	n_len = get_len(nbr);
	n_str[n_len] = '\0';
	if (n < 0)
	{
		n_str[0] = '-';
		nbr = -nbr;
		i = 1;
	}
	while (n_len-- - i)
	{
		n_str[n_len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	ft_putstr_fd(n_str, fd);
}
