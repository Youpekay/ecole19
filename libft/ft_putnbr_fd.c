/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:19:39 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/25 17:30:23 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	swap_tab(char *tab, int pos1, int pos2)
{
	int tmp;

	tmp = tab[pos1];
	tab[pos1] = tab[pos2];
	tab[pos2] = tmp;
}

void		ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	n_str[11];
	size_t	n_str_len;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	i = 0;
	while(n)
	{
		n_str[i++] = n % 10 + '0';
		n /= 10;
	}
	n_str[i] = '\0';
	n_str_len = ft_strlen(n_str);
	i = 0;
	while(n_str_len / 2)
	{
		swap_tab(n_str, i, n_str_len - i++);
		i++;
	}
	ft_putendl_fd(n_str, fd);
}

int main(int argc, char **argv)
{
	char *a = argv[1];
	int b = atoi(a);

	ft_putnbr_fd(b, 1);
	return (0);
}