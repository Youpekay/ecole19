/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 09:58:52 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/28 14:17:22 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*mod_tab;

	i = -1;
	if (!(mod_tab = malloc((length + 1) * sizeof(int))))
		return (NULL);
	while (++i < length)
		mod_tab[i] = (*f)(tab[i]);
	return (mod_tab);
}
