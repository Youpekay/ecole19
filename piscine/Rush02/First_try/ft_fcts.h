/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fcts.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 18:04:29 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/26 21:35:53 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FCTS_H
# define FT_FCTS_H

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(char *str);
void			ft_swap(int *a, int *b);
void			ft_putnbr(int nb);
struct Nbr_dict	*ft_split_struct(char *str);
int				ft_atoi(char *str);
struct Nbr_dict	*ft_create_dict(void);
char			**ft_split(char *str, char *charset);


struct	Nbr_dict {
	char	*number_form;
	char	*char_form;
};

#endif
