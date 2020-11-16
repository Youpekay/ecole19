/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 15:33:45 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/22 14:29:39 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		is_ignored(char c)
{
	return ((c > 8 && c < 14) || c == 32 || c == 43);
}

int		is_base_valid(char *str)
{
	int		i;
	int		j;

	i = 0;
	if (str == 0 || ft_strlen(str) < 2)
		return (0);
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == '\r' || str[i] == ' ' ||
				str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (i < ft_strlen(str))
	{
		j = i + 1;
		while (j < ft_strlen(str))
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (1);
}

int		give_index_base(char *base, char tofind)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == tofind)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int size;
	int result;
	int negative;
	int char_index;

	negative = 1;
	size = ft_strlen(base);
	result = 0;
	if (!is_base_valid(base))
		return (0);
	while (is_ignored(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while ((char_index = give_index_base(base, *str)) != -1)
	{
		result *= size;
		result += char_index;
		str++;
	}
	return (result * negative);
}
