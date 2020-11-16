/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:50:55 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/15 12:12:48 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int count;
	int size;

	i = 0;
	count = 0;
	size = 0;
	if (!to_find[0])
		return (str);
	else
		while (to_find[size])
			size++;
	while (str[count])
	{
		i = 0;
		while (i < size && str[count + i] == to_find[i])
			i++;
		if (i == size)
			return (str + count);
		count++;
	}
	return (0);
}
