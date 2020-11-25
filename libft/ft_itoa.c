/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 08:42:51 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/25 09:16:04 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_n_len(int nbr)
{
	size_t len;

	len = 1;
	if(nbr < 0)
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

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_len = get_n_len(n);
	if(!(str = (char *)malloc(sizeof(char) * (n_len + 1))))
		return (NULL);
	str[n_len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	while (i < n_len--)
	{
		str[n_len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
