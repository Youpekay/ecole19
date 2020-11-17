/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 11:17:41 by dfilipov          #+#    #+#             */
/*   Updated: 2020/09/29 16:46:05 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_fcts.h"

void	free_the_dict(void)
{
	int i;

	i = 0;
	while (i < g_nbr_struct_items)
	{
		free(nbr_dic[i].number_form);
		free(nbr_dic[i].char_form);
		i++;
	}
	free(nbr_dic);
}

char	*remove_useless_0(char *input)
{
	while (*input)
	{
		if (*input != '0')
			break ;
		input++;
	}
	return (input);
}

int		main(int argc, char **argv)
{
	char	*input;

	if (argc == 3)
		input = argv[2];
	else if (argc == 2)
		input = argv[1];
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (is_valid_number(input))
	{
		input = remove_useless_0(input);
		nbr_dic = ft_create_dict();
		cut_all_digits(input);
		free_the_dict();
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
}
