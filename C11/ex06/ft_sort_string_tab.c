/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:10:05 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/29 20:17:16 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	while (tab[i])
	{
		j = 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[j - 1], tab[i]) > 0)
			{
				tmp = tab[j - 1];
				tab[j - 1] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}
}
