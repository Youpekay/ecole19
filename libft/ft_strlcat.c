/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:00:23 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/23 12:25:27 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (size + src_len);
	dst = ft_strchr(dst, '\0');
	ft_strlcpy(dst, src, size - dst_len);
	return (dst_len + src_len);
}

int main(int argc, char **argv)
{
	char *src = argv[1];
	char *dst = argv[2];
	
	size_t size = atoi(argv[3]);

	printf("%ld %s\r\n", ft_strlcat(dst, src, size), dst);
	char *src2 = argv[1];
	char *dst2 = argv[2];
	printf("%ld %s\r\n", strlcat(dst2, src2, size), dst2);
}