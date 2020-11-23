/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:00:23 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/23 11:53:29 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
#include<stdio.h>
#include<bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[j] && j < size)
		j++;
	i = j;
	while (src[j - i] && j + 1 < size)
	{
		dst[j] = src[j - i];
		j++;
	}
	if (i < size)
		dst[j] = '\0';
	return (i + ft_strlen(src));
}

int main(int argc, char **argv)
{
	char *src = argv[1];
	char *dst = argv[2];
	
	size_t size = atoi(argv[3]);

	printf("%ld %s\r\n", ft_strlcat(dst, src, size), dst);
	src = argv[1];
	dst = argv[2];
	printf("%ld %s\r\n", strlcat(dst, src, size), dst);
}