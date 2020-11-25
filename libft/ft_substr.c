/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 05:06:27 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/26 00:02:54 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_sub;

	if (!s || !(s_sub = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	ft_strlcpy(s_sub, s + start, len + 1);
	return (s_sub);
}
