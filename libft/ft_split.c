/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 04:59:11 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/25 10:23:01 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_nbr_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			words++;
		while (*s && *s != c)
			s++;
	}
	return (words);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void		free_tab(char **tab, size_t i)
{
	while (i)
		free(tab[i--]);
	free(tab[i]);
	free(tab);
	return ;
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	nbr_words;
	char	**tab;

	if (!s || !(tab = malloc(sizeof(char *) * (get_nbr_words(s, c) + 1))))
		return (NULL);
	nbr_words = get_nbr_words(s, c);
	i = -1;
	while (++i < nbr_words)
	{
		if (!(tab[i] = malloc(sizeof(char) * (get_word_len(s, c) + 1))))
		{
			free_tab(tab, i);
			return (NULL);
		}
		j = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			tab[i][j++] = *s++;
		tab[i][j] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}
