/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:54:29 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/20 18:54:54 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_display_error();
int		ft_is_valid_input();
void	ft_init_tab();
void	ft_kill_tab();
int		ft_start_calc();
int		ft_strlen(char *str);

extern char **g_tab;
extern char *g_data;
extern int g_show_result;

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_display_error();
	else
	{
		g_data = argv[1];
		if (ft_is_valid_input(0, ft_strlen(g_data), 0))
		{
			g_show_result = 0;
			ft_init_tab();
			ft_start_calc(1, -1, -1);
			ft_kill_tab();
		}
		else
			ft_display_error();
	}
	if (!g_show_result)
		ft_display_error();
	return (0);
}
