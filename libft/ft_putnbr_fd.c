/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:19:39 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/26 01:36:15 by mreniere         ###   ########.fr       */
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

	i = 0;
	if(n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		n_len = get_len(n);
		n_str[n_len] = '\0';
		if (n < 0)
		{
			n_str[0] = '-';
			n = -n;
			i = 1;
		}
		while (n_len-- - i)
		{
			n_str[n_len] = (n % 10) + '0';
			n /= 10;
		}
		ft_putstr_fd(n_str, fd);
	}
}
