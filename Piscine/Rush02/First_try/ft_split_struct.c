/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:06:31 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/26 22:08:54 by mreniere         ###   ########.fr       */
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

    data = ft_split(str, charset);
    return (data);
}

struct Nbr_dict *ft_split_struct(char *str)
{
	struct Nbr_dict *tab;
	//int s;
    char **all_entries;
    //int d;
	int i = 0;
	//char *number_form;
	//char *char_form;
	char **data;
	char *charset = ":";
	int dict_size;

    all_entries = split_dico(str);
	dict_size = ft_strlen(*all_entries);
	
	tab = malloc((dict_size + 150) * sizeof(struct Nbr_dict));
	while (all_entries[i])
	{
		data = ft_split(all_entries[i], charset);
		
		tab[i].char_form = malloc((ft_strlen(data[0] + 10)) * sizeof(char));
		tab[i].number_form = malloc((ft_strlen(data[1] + 10)) * sizeof(char));
		tab[i].char_form = data[0];
		tab[i].number_form = data[1];
		i++;
		/*
		ft_putstr(data[0]);
		ft_putstr(" | ");
		ft_putstr(data[1]);
		ft_putstr("\n");
		*/	
	}
	i = 0;
	while (tab)
	{
		ft_putstr(tab[i].number_form);
		ft_putchar(' ');
		ft_putstr(tab[i].char_form);
		ft_putchar('\n');
		i++;
	}

	/*
    ft_putstr(tab_dico[1]);
    ft_putstr(tab_dico[0]);
	tab = malloc(41 * sizeof(struct Nbr_dict));
    s = 0;
    d = 0;
	while (tab_dico[d] != '\0')
    {
        (tab[s].number_form) = malloc((ft_strlen(tab_dico[d])) * sizeof(char));
        (tab[s].number_form) = (tab_dico[d]);
        ft_putstr(tab[s].number_form);
        ft_putchar('\n');
        d++;
        (tab[s].char_form) = malloc((ft_strlen(tab_dico[d])) * sizeof(char));
        (tab[s].char_form) = (tab_dico[d]);
        ft_putstr(tab[s].char_form);
        ft_putchar('\n');
        ft_putchar('\n');
        s++;
    }
	*/
    return (tab);
}
