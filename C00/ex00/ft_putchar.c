/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 18:11:38 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/21 14:31:09 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char *str1;
char c;

str = argv[2];
c = str[0];

argv[2][0]

argv[0] = name of the program (like "./a.out")
argv[1] = first parameter
argv[2] = second parameter


./a.out "sdfdfgdgdsfghs"


if(argc != 2)
{
	write();
	return (0);
}