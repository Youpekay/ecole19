/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:57:05 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/20 18:57:59 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(unsigned int nb);
int		ft_strlen(char *str);
void	ft_putchar(char c);
int		ft_col_down(int i);
int		ft_col_up(int i);
int		ft_col_left(int i);
int		ft_col_right(int i);

extern char **g_tab;
extern char *g_data;

int		calc_tab_values(int a, int b, int c, int d)
{
	if (a == 4)
		return (1);
	else if (a == 3)
		return (2);
	else if (a == 2)
	{
		if (b == 4 || (c == 4 && d == 3))
			return (2);
		else
			return (3);
	}
	else if (b == 4)
		return (2);
	else if (b == 3)
		return (3);
	else if (c == 4)
		return (3);
	else
		return (4);
}

int		ft_is_match_input(void)
{
	int i;
	int j;
	int calc_result;

	i = -1;
	j = -1;
	while (g_data[++i])
	{
		if (g_data[i] >= '1' && g_data[i] <= '4')
		{
			if (++j < 4)
				calc_result = ft_col_up(j);
			else if (j < 8)
				calc_result = ft_col_down(j - 4);
			else if (j < 12)
				calc_result = ft_col_left(j - 8);
			else
				calc_result = ft_col_right(j - 12);
			if (calc_result != g_data[i] - 48)
				return (0);
		}
	}
	return (1);
}
