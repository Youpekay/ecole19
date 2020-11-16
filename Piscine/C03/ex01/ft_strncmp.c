/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:39:08 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/14 20:21:54 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				real_size;
	unsigned int	i;

	real_size = 0;
	i = 0;
	real_size = ft_strlen(s1) <= ft_strlen(s2) ? ft_strlen(s1) : ft_strlen(s2);
	while (real_size-- >= 0 && i != n)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return ((s2[i] - s1[i]) * -1);
		i++;
	}
	return (0);
}
