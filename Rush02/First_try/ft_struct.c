/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebodart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 11:47:36 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/26 14:48:11 by ebodart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


int g_index1 = 0;
int g_index2 = 0;

struct	Nbr_dict {
	char    *number_form;
	char    *char_form;
};

void ft_number_struct(struct Nbr_dict *tab, char *str, int s)
{
	int i;
	if (g_index2 != 0)
		g_index2 = g_index2 + 1;
	g_index1 = g_index2;
	while (str[g_index2] != ':' && (s < 44))
		g_index2++;
	(tab[s].number_form) = malloc(((g_index2 - g_index1) + 1) * sizeof(char));
	i = 0;
	while (g_index1 < g_index2)
	{
		(tab[s].number_form)[i] = str[g_index1];
		g_index1++;
		i++;
	}
	(tab[s].number_form)[i] = '\0';
}

void ft_char_struct(struct Nbr_dict *tab, char *str, int s)
{
	int i;
	int fin;
	
	g_index2 = g_index2 + 2;
	g_index1 = g_index2;
	fin = 0;
	while (str[g_index2] != '\n' && (fin == 0))
	{
		g_index2++;
		if (str[g_index2] == '\0')
		{	
			fin = 1;
		}
	}
	(tab[s].char_form) = malloc(((g_index2 - g_index1) + 1) * sizeof(char));
	i = 0;
	while (g_index1 < g_index2)
	{
		(tab[s].char_form)[i] = str[g_index1];
		g_index1++;
		i++;
	}
	(tab[s].char_form)[i] = '\0';
}

struct Nbr_dict *ft_struct(char *str)
{
	struct Nbr_dict *tab;
	int s;

	tab = malloc(41 * sizeof(struct Nbr_dict));
	s = 0;
	while (s < 41)
	{
		ft_number_struct(tab, str, s);
		ft_char_struct(tab, str, s);
		s++;
	}
	g_index1 = 0;
	g_index2 = 0;
	return (tab);
}
