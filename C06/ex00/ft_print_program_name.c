/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 09:04:35 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/18 09:25:16 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char *name;

	if (argc > 0)
	{
		name = argv[0];
		while (*name)
			write(1, name++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
