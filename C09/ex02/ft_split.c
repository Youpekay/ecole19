/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 13:27:30 by mreniere          #+#    #+#             */
/*   Updated: 2020/09/24 19:44:36 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		*ft_add_position(int *curr_pos, int new_pos)
{
	
}

int		*ft_calc_iterations(char *str, char *tofind)
{
	int tf_size;
	int str_size;
	int i;

	i = 0;
	tf_size = ft_strlen(tofind);
	str_size = ft_strlen(str);
	while (str[i])
	{
		if()
		i++;
	}
}





char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		chset_size;

	chset_size = ft_strlen(charset);
	
	
	return (result);
}

int		main(int argc, char **argv)
{
	int		index;
	char	**split;

	argc = argc + 0;
	printf("count occ: %d\n", count_occur("  a  b   b   ", " a   "));
	//split = ft_split("ImtmVrV6Ov8QrkGGUglBy7Vgsu iIsdl5XyT35Czv4xeu", "yenORYQ");
	split = ft_split(argv[1], argv[2]);
	index = 0;
	printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		fflush(stdout);
		index++;
	}
	printf("tab end\n");
}