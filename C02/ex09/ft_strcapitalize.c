/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 10:44:05 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/13 12:45:01 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char str)
{
	if (!(str > 47 && str < 58))
		return (0);
	return (1);
}

int		is_lower(char str)
{
	if (!(str > 96 && str < 123))
		return (0);
	return (1);
}

int		is_upper(char str)
{
	if (!(str > 64 && str < 91))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_lower(str[i]))
		{
			if (i == 0)
				str[i] -= 32;
			else if (!(is_num(str[i - 1]) ||
						is_lower(str[i - 1]) || is_upper(str[i - 1])))
				str[i] -= 32;
		}
		else if (is_upper(str[i]))
		{
			if (i > 0)
			{
				if ((is_num(str[i - 1]) ||
							is_lower(str[i - 1]) || is_upper(str[i - 1])))
					str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
