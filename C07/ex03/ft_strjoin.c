/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 10:07:28 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 10:42:25 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int i;
	int total_size;
	char *empty;

	i = 0;
	if(!size)
	{
		empty = malloc(sizeof(char));
		return (empty);
	}
	total_size = ft_calc_total_size(size, strs, sep);
	if(!)
}