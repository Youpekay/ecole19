/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_utility.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:59:51 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/20 19:19:04 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		calc_tab_values(int a, int b, int c, int d);

extern char **g_tab;

int		ft_is_valid_tab(int x, int y, int n)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (g_tab[x][i] == n)
			return (0);
		if (g_tab[i][y] == n)
			return (0);
		i++;
	}
	return (1);
}

int		ft_col_up(int i)
{
	int result;
	int a;
	int b;
	int c;
	int d;

	a = g_tab[i][0];
	b = g_tab[i][1];
	c = g_tab[i][2];
	d = g_tab[i][3];
	result = calc_tab_values(a, b, c, d);
	return (result);
}

int		ft_col_down(int i)
{
	int result;
	int a;
	int b;
	int c;
	int d;

	a = g_tab[i][3];
	b = g_tab[i][2];
	c = g_tab[i][1];
	d = g_tab[i][0];
	result = calc_tab_values(a, b, c, d);
	return (result);
}

int		ft_col_left(int i)
{
	int result;
	int a;
	int b;
	int c;
	int d;

	a = g_tab[0][i];
	b = g_tab[1][i];
	c = g_tab[2][i];
	d = g_tab[3][i];
	result = calc_tab_values(a, b, c, d);
	return (result);
}

int		ft_col_right(int i)
{
	int result;
	int a;
	int b;
	int c;
	int d;

	a = g_tab[3][i];
	b = g_tab[2][i];
	c = g_tab[1][i];
	d = g_tab[0][i];
	result = calc_tab_values(a, b, c, d);
	return (result);
}
