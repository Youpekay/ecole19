/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 09:27:29 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/18 10:08:54 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	result;

	while (n--)
	{
		result = *(unsigned char *)(s1++) - *(unsigned char *)(s2++);
		if (result != 0)
			return (result);
	}
	return (0);
}
