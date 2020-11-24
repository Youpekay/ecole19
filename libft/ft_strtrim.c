/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:47:28 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/23 17:41:44 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*s_trim;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	while (ft_strlen(s1) && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end - 1]))
		end--;
	if(!(s_trim = malloc(sizeof(char) * end + 1)))
		return (NULL);
	ft_strlcpy(s_trim, s1, end + 1);
	return (s_trim);
}
