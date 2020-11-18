/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 06:10:40 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/18 09:25:05 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	if (!dest && !src)
		return (NULL);
	dest_cpy = (unsigned char*)dest;
	src_cpy = (unsigned char*)src;
	if (src > dest)
	{
		while (n--)
			*dest_cpy++ = *src_cpy++;
	}
	else
	{
		while (n--)
			dest_cpy[n] = src_cpy[n];
	}
	return (dest);
}
