# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 12:21:06 by mreniere          #+#    #+#              #
#    Updated: 2020/11/17 13:12:59 by mreniere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc -nostartfiles
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs

NAME	= libft.a
SRC = ft_isalpha.c	ft_strlen.c

INCLUDE = ./libft.h

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o :
	%.c $(INLUDE)
	$(CC) $(FLAGS) -c -o $@ $<

clean :
	rm -rf $(OBJ)

fclean :
	clean
	rm -rf $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	$(CC) -shared -o libft.so $(OBJ)


.PHONY: all clean fclean re