/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:58:52 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/29 13:37:06 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tab_edit;

	i = -1;
	if (!(tab_edit = malloc((length + 1) * sizeof(int))))
		return (NULL);
	while (++i < length)
		tab_edit[i] = (*f)(tab[i]);
	return (tab_edit);
}
