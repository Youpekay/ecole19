/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 04:59:11 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/24 16:06:57 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <unistd.h>

static size_t get_nbr_words(char const *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		count++;
		while (*s && *s == c)
			s++;
	}
	return (count);
}

static size_t get_word_len(char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t nbr_words;
	char **tab;

	i = -1;
	nbr_words = get_nbr_words(s, c);
	if (!s || !(tab = malloc(sizeof(char *) * (nbr_words + 1))))
		return (NULL);
	while (++i < nbr_words)
	{
		if (!(tab[i] = malloc(sizeof(char) * (get_word_len(s, c) + 1))))
			return (NULL);
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
/*
int main(int argc, char **argv)
{
	char *str = argv[1];
	char c = 32;
	char **ok;
	size_t i = 0;

	ok = ft_split(str, c);
	while (ok[i])
		printf("%s\r\n", ok[i++]);
	return (0);
}*/