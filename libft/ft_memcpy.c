/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 00:59:29 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/18 01:01:56 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while (n--)
		*(d++) = *(s++);
	return (dest);
}
