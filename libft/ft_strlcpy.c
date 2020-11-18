/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:21:05 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/18 10:48:18 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	if (src && dst)
	{
		src_len = ft_strlen(src);
		if (size)
		{
			while (*src && (size-- - 1))
				*dst++ = *src++;
			*dst = '\0';
		}
		return (src_len);
	}
	return (0);
}
