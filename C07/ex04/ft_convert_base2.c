/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 09:29:32 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/23 14:54:54 by mreniere         ###   ########.fr       */
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

int		ft_get_needed_size(unsigned int nb, unsigned int base_size)
{
	unsigned int	size;

	size = 0;
	while (1)
	{
		size++;
		if (nb / base_size == 0)
			break ;
		nb /= base_size;
	}
	return (size);
}

int		ft_is_base_valid(char *str)
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
	return (i);
}

int		ft_exist_char_in_base(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int		ft_atoi_base(char *str, char *base, int size)
{
	int i;
	int result;
	int negative;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 1;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative *= -1;
	result = 0;
	while ((i = ft_exist_char_in_base(*str++, base)) >= 0)
		result = result * size + i;
	return (result * negative);
}
