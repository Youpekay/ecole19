/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 13:59:16 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/29 18:05:24 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		g_nbr1_int;
int		g_nbr2_int;
char	*g_operator;
int		(*g_addr_fct)(int, int);

int		is_operator_valid(char *ope)
{
	char op;

	if (ft_strlen(ope) != 1)
		return (0);
	op = ope[0];
	if (op == '+' || op == '-' || op == '/' || op == '*' || op == '%')
		return (1);
	return (0);
}

int		is_nbr2_ok(void)
{
	if (!g_nbr2_int)
	{
		if (g_operator[0] == '/')
		{
			ft_putstr("Stop : division by zero");
			return (0);
		}
		else if (g_operator[0] == '%')
		{
			ft_putstr("Stop : modulo by zero");
			return (0);
		}
	}
	return (1);
}

void	ft_get_addr(void)
{
	if (g_operator[0] == '+')
		g_addr_fct = &ft_addition;
	else if (g_operator[0] == '-')
		g_addr_fct = &ft_substraction;
	else if (g_operator[0] == '/')
		g_addr_fct = &ft_division;
	else if (g_operator[0] == '*')
		g_addr_fct = &ft_multiplication;
	else
		g_addr_fct = &ft_modulo;
}

int		main(int argc, char **argv)
{
	char	*nbr1_char;
	char	*nbr2_char;
	int		result;

	if (argc != 4)
		return (0);
	nbr1_char = argv[1];
	nbr2_char = argv[3];
	g_operator = argv[2];
	if (!is_operator_valid(g_operator))
	{
		ft_putchar('0');
		return (0);
	}
	ft_get_addr();
	g_nbr1_int = ft_atoi(nbr1_char);
	g_nbr2_int = ft_atoi(nbr2_char);
	if (is_nbr2_ok())
	{
		result = g_addr_fct(g_nbr1_int, g_nbr2_int);
		ft_putnbr(result);
	}
	return (0);
}
