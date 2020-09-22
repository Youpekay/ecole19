/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 10:07:28 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 12:27:55 by mreniere         ###   ########.fr       */
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

void	ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int		ft_calc_total_size(int size, char **strs, char *sep)
{
	int i;
	int total_size;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		total_size += ft_strlen(sep);
		i++;
	}
	total_size -= ft_strlen(sep);
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*empty;
	char	*result;
	char	*result_start;

	i = -1;
	empty = malloc(sizeof(char));
	if (!size)
		return (empty);
	if (!(result = malloc((ft_calc_total_size(size, strs, sep)
		+ 1) * sizeof(char))))
		return (0);
	result_start = result;
	while (++i < size)
	{
		ft_strcpy(result, strs[i]);
		result += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(result, sep);
			result += ft_strlen(sep);
		}
	}
	*result = '\0';
	return (result_start);
}
