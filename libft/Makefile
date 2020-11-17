# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 12:21:06 by mreniere          #+#    #+#              #
#    Updated: 2020/11/17 23:55:05 by mreniere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

NAME = libft.a
SRC =	ft_isupper.c \
		ft_islower.c \
		ft_isalpha.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c

INCLUDE = ./libft.h

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : 
	$(CC) $(CFLAGS) -c $(SRC)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all

so:
	$(CC) -c -fPIC $(CFLAGS) $(SRC)
	$(CC) -c -shared -o libft.so $(OBJ)


.PHONY: all clean fclean re