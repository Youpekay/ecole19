# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 12:21:06 by mreniere          #+#    #+#              #
#    Updated: 2020/11/18 00:28:37 by mreniere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
AR = ar rcs

NAME = libft.a
SO = libft.so
SRC = $(wildcard *.c)

INCLUDE = ./libft.h

OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : 
	$(CC) $(CFLAGS) $(SRC)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME) $(SO)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	$(CC) -shared -o $(SO) $(OBJ)
	