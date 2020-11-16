/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 08:16:12 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/24 10:03:38 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*desti;
	int		size;

	i = 0;
	size = ft_strlen(src);
	if (!(desti = malloc(size * sizeof(char) + 1)))
		return (0);
	while (src[i])
	{
		desti[i] = src[i];
		i++;
	}
	desti[i] = '\0';
	return (desti);
}
