/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:32:37 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/18 11:13:08 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <string.h>

size_t		ft_strlen(const char *s);
int			ft_islower(int c);
int			ft_isupper(int c);
int			ft_isalpha(int c);

void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);

void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);

size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

char		*ft_strchr(const char *s, int c);

#endif
