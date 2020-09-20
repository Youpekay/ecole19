/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_calc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:56:09 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/20 18:56:11 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
int		ft_is_valid_tab(int x, int y, int n);
void	ft_display_tab();
int		ft_is_match_input();

extern char **g_tab;

void	ft_start_calc(int i, int x, int y)
{
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
		{
			if (g_tab[x][y] == 0)
			{
				i = 0;
				while (++i < 5)
				{
					if (ft_is_valid_tab(x, y, i))
					{
						g_tab[x][y] = i;
						ft_start_calc(i, -1, y);
						g_tab[x][y] = 0;
					}
				}
				return ;
			}
		}
	}
	if (ft_is_match_input())
		ft_display_tab();
}
