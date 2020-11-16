/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfilipov <dfilipov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:06:31 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/27 11:15:16 by dfilipov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char	**ft_split(char *str, char *charset);
int	ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
*/
#include <unistd.h>
#include <stdlib.h>
#include "ft_fcts.h"



char **split_dico(char *str)
{
    char **data;
    char *charset = "\n";
	int	data_size;
	int i;

	i = 0;
    data = ft_split(str, charset);
	data_size = ft_strlen(*data);
	while(data[i])
	{
		//ft_putstr(data[i]);
		//ft_putchar('\n');
		i++;
	}
	
    return (data);
}

struct Nbr_dict *ft_split_struct(char *str)
{
	struct Nbr_dict *tab;
    char **all_entries;
	int i;
	int mem;
	char **data;
	char *charset = ":";

    all_entries = split_dico(str);
	i = 0;
	
	mem = 0;
	while(all_entries[mem])
	{
		mem++;
	}
	ft_putnbr(mem);
	ft_putchar('\n');
	tab = malloc((i + 1) * sizeof(struct Nbr_dict*));
	
	while (all_entries[i])
	{
		data = ft_split(all_entries[i], charset);
		
		
		tab[i].number_form = malloc((ft_strlen(data[0]) +1) * sizeof(char));
		tab[i].char_form = malloc((ft_strlen(data[1]) +1)  * sizeof(char));
		
		tab[i].number_form = data[0];
		tab[i].char_form = data[1];
		//ft_strcpy(tab[i].number_form, data[0]);
		//ft_strcpy(tab[i].char_form, data[1]);
		ft_putstr(tab[i].char_form);
		free(data);
		ft_putstr(tab[i].number_form);
		ft_putstr("\n");
		//ft_putstr(tab[i].char_form);
		//ft_putstr("\n\n");
		i++;
		//ft_putstr(tab[0].char_form);
		//ft_putstr("\n");
		
	}
	ft_putstr("\n");
	ft_putstr("\n");
	ft_putstr("\n");
	tab[i].char_form = NULL;
	tab[i].number_form = NULL;
	i = 0;
	//ft_putstr(tab[0].char_form);
	//ft_putstr("\n");
	
	while (all_entries[i])
	{
		ft_putstr(tab[i].char_form);
		ft_putstr("\n");
		i++;
	}

	//ft_putstr(tab[ft_strlen(tab)-1].char_form);

    return (tab);
}
