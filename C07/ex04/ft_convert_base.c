/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 09:29:29 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/28 15:50:43 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_get_needed_size(unsigned int nb, unsigned int base_size);
int		ft_is_base_valid(char *str);
int		ft_exist_char_in_base(char c, char *base);
int		ft_atoi_base(char *str, char *base, int size);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*result;
	int				nb_int;
	unsigned int	nb_uint;
	int				size_bto;
	int				needed_size;

	size_bto = ft_is_base_valid(base_to);
	if (!(ft_is_base_valid(base_from) && size_bto))
		return (NULL);
	nb_int = ft_atoi_base(nbr, base_from, ft_is_base_valid(base_from));
	nb_uint = (nb_int < 0) ? -nb_int : nb_int;
	needed_size = ft_get_needed_size(nb_uint, size_bto) + ((nb_int < 0) ? 1 : 0);
	if (!(result = malloc((needed_size + 1) * sizeof(char))))
		return (NULL);
	result[needed_size] = '\0';
	while (needed_size--)
	{
		result[needed_size] = base_to[nb_uint % size_bto];
		nb_uint /= size_bto;
	}
	if (nb_int < 0)
		result[0] = '-';
	return (result);
}
