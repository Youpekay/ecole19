/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreniere <mreniere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 10:24:40 by ebodart           #+#    #+#             */
/*   Updated: 2020/09/26 21:33:11 by mreniere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "ft_fcts.h"

#define BUF_SIZE 690

struct Nbr_dict	*ft_create_dict(void)
{
	int				fd;
	int				ret; /*sert a stocker le retour de read(=nbre d'octets lus ou -1 si erreurs)*/
	char buf[BUF_SIZE + 1]; /*endroit ou on stock la chaine*/
	//int				s; /*sert a imprimer toutes les structures*/
	struct Nbr_dict *tab;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0'; /*met \0 au dernier element de la string*/
	tab = ft_split_struct(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
	}
	return (tab);
}
