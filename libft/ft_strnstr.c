/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:42:16 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/18 23:33:07 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t lit_len;
	size_t big_len;

	lit_len = ft_strlen(little);
	if (lit_len)
	{
		big_len = ft_strlen(big);
		if (big_len >= lit_len)
		{
			while (len && *big && len-- >= lit_len)
			{
				if (!(ft_strncmp(big, little, lit_len)))
					return ((char*)big);
				big++;
			}
		}
		return (NULL);
	}
	return ((char*)big);
}
