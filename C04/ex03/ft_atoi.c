/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 19:11:44 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/16 16:50:47 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid_char(char c)
{
	return (c == 43 || c == 45 || (c >= 9 && c <= 13) ||
			c == 32 || (c > 47 && c < 58)) ? (1) : (0);
}

int		is_numeric(char c)
{
	return (c > 47 && c < 58) ? (1) : (0);
}

int		ft_atoi(char *str)
{
	int i;
	int result;
	int neg_count;

	neg_count = 0;
	result = 0;
	i = -1;
	while (str[++i])
	{
		if (is_numeric(str[i]))
		{
			result *= 10;
			result += str[i] - 48;
		}
		else if (str[i] == 45)
			neg_count++;
		else if (!(is_valid_char(str[i])))
			break ;
	}
	return ((neg_count % 2) ? -result : result);
}
