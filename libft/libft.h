/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 12:32:37 by mreniere          #+#    #+#             */
/*   Updated: 2020/11/18 06:18:01 by mreniere         ###   ########.fr       */
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

#endif
