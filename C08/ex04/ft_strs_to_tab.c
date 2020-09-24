/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:55:47 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/24 10:15:36 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int				i;
	char			*desti;
	int				size;

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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tstockstr;
	int				i;

	if (ac < 0)
		ac = 0;
	if (!(tstockstr = malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tstockstr[i].size = ft_strlen(av[i]);
		tstockstr[i].str = av[i];
		tstockstr[i].copy = ft_strdup(av[i]);
		i++;
	}
	tstockstr[i].str = 0;
	return (tstockstr);
}
