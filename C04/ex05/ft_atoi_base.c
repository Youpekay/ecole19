/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:33:45 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/16 21:42:56 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int 	neg_count = 0;
char	clean_str[100];

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		is_base_valid(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i++])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		j = 0;
		while (base[j++])
			if (j != i && base[j] == base[i])
				return (0);
	}
	return (1);
}

int		clean_char(char c, char *base)
{
	int i;

	i = 0;
	if (c == 43 || (c >= 9 && c <= 13) || c == 32)
	   return (0) ;
	else if (c == 45)
	{
		neg_count++;
		return (0);
	}
	while (base[i])
	{
		if (c == base[i])
			return (c);
		i++;
	}
	return (-1);
}

void	clean_it(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i++])
	{
		if (clean_char(str[i], base) != -1)
		{
			if (clean_char(str[i], base) != 0)
				clean_str[j++] = clean_char(str[i], base);
		}
		else
			break;
	}
	clean_str[j] = '\0';
}

int		ft_expo(int nb, int pos)
{
	while(pos-- > 0)
		nb *= nb;
	return nb;
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int size;
	int result;
	int multi;

	i = 0;
	result = 0;
	if (!is_base_valid(base))
		return (0);
	clean_it(str, base);
	size = ft_strlen(clean_str);
	
	while(i < size - 1)
	{
		multi = ft_expo(ft_strlen(base), size - i); 
		result += (clean_str[i] - 48) * multi;
		i++;
	}
	return(result);
}
