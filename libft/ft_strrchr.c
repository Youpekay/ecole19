/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:11:48 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/18 17:40:20 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t size;

	size = ft_strlen(s) + 1;
	s = ft_strchr(s, '\0');
	while(size--)
	{
		if(*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
