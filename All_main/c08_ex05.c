/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:55:47 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/24 11:14:24 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int				i;
	char			*desti;
	int				size;

	i = 0;
	size = ft_strlen(src);
	if (!(desti = malloc(size * sizeof(char) + 1)))
		return (0);
	while (src[i])
	{
		desti[i] = src[i];
		i++;
	}
	desti[i] = '\0';
	return (desti);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tstockstr;
	int				i;

	if (ac < 0)
		ac = 0;
	if (!(tstockstr = malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tstockstr[i].size = ft_strlen(av[i]);
		tstockstr[i].str = av[i];
		tstockstr[i].copy = ft_strdup(av[i]);
		i++;
	}
	tstockstr[i].str = 0;
	return (tstockstr);
}



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	char	result;

	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		result = nb % 10 + 48;
		ft_putchar(result);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}


int		main(void)
{
	struct	s_stock_str	*s;
	
	
	char **av;
	char *str1;
	char *str2;
	char *str3;
	
	av = malloc(3 * sizeof(char *));
	str1 = "wesh";
	str2 = "les poto";
	str3 = "sauce tomate";
	av[0] = str1;
	av[1] = str2;
	av[2] = str3;

	s = ft_strs_to_tab(3, av);
	ft_show_tab(s);
}