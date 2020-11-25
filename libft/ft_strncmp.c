/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 22:30:24 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/26 00:06:53 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	cmp_result;

	while (n--)
	{
		if (!(*s1) && !(*s2))
			break ;
		cmp_result = (unsigned char)*s1++ - (unsigned char)*s2++;
		if (cmp_result)
			return (cmp_result);
	}
	return (0);
}
