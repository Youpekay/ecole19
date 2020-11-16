/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:56:28 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 08:47:35 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

extern char *g_data;
extern char **g_tab;
extern int g_show_result;

void	ft_init_tab(void)
{
	int x;
	int y;

	if (!(g_tab = malloc(5 * sizeof(char*))))
		return (NULL);
	y = -1;
	while (++y < 4)
	{
		if (!(g_tab[y] = malloc(4 * sizeof(char))))
			return ;
		x = -1;
		while (++x < 4)
			g_tab[y][x] = 0;
	}
}

void	ft_display_tab(void)
{
	int x;
	int y;

	y = 0;
	if (g_show_result == 0)
	{
		while (y < 4)
		{
			x = 0;
			while (x < 4)
			{
				ft_putchar(g_tab[y][x] + '0');
				if (++x < 4)
					ft_putchar(' ');
			}
			ft_putchar('\n');
			y++;
		}
	}
	g_show_result++;
}

void	ft_kill_tab(void)
{
	int nbr_ln;

	nbr_ln = 4;
	while (nbr_ln--)
		free(g_tab[nbr_ln - 1]);
	free(g_tab);
}

int		ft_is_valid_input(int t_size, int str_size, int i)
{
	while (i < str_size)
	{
		if (g_data[i] >= '1' && g_data[i] <= '4')
		{
			t_size++;
			if (i > 0)
			{
				if (g_data[i - 1] != 32)
					return (0);
			}
			i += 2;
		}
		else
			return (0);
	}
	if (t_size == 16)
		return (1);
	else
		return (0);
}

int		ft_is_filled_tab(void)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if (g_tab[x][y] == 0)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}
