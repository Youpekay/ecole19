/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 12:53:33 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/15 18:29:12 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (++i < size && *dest)
		dest++;
	if (i == size)
		return (i + ft_strlen(src));
	while (src[j])
	{
		if (j < size - i)
			*dest++ = src[j];
		j++;
	}
	*dest = '\0';
	return (i + j);
}
