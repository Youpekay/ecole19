/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:39:08 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/14 10:06:43 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			
		}

		i++;
	}

	return result;
}

int		main(void)
{
	char 	*a;
	char 	*b;
	int		result1;
	int		result2;

	a = "Hello";
	b = "Hello/";
	result1 = 0;
	result2 = 0;

	result1 = strcmp(a, b);
	result2 = ft_strcmp(a, b);

	printf("%d", result1);
	return (0);

}
