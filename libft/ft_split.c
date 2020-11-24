/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 04:59:11 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/24 05:31:26 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		get_nbr_words(char const *str, char c)
{
	int		count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

size_t		get_word_size(char const *str, char c, int pos)
{
	size_t		i;

	i = 0;
	while (str[pos] && str[pos++] == c)
			i++;
	return (i);
}

void	put_words(char **tab, char const *str, char c)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	k = 0;
	while (str[++i])
	{
		if (str[i] != c)
		{
			if (k == 0)
				if(!(tab[j] = malloc(
					(get_word_size(str, c, i) + 1) * sizeof(char))))
					return (NULL);
			tab[j][k] = str[i];
			tab[j][k + 1] = '\0';
			k++;
		}
		else if (str[i + 1] != c && k > 0)
		{
			j++;
			k = 0;
		}
	}
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nbr_words;

	nbr_words = get_nbr_words(s, c);
	if(!(tab = malloc((nbr_words + 1) * sizeof(char*))))
		return(NULL);
	put_words(tab, s, c);
	tab[nbr_words] = NULL;
	return (tab);
}
