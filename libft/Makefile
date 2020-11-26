# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mreniere <mreniere@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 12:21:06 by mreniere          #+#    #+#              #
#    Updated: 2020/11/26 15:58:57 by mreniere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
AR = ar rcs

NAME = libft.a
SO = libft.so
AOUT = a.out

SRC = ft_memset.c ft_bzero.c					\
		ft_memcpy.c ft_memccpy.c				\
		ft_memmove.c ft_memchr.c				\
		ft_memcmp.c ft_strlen.c					\
		ft_strdup.c ft_strlcpy.c				\
		ft_strlcat.c ft_calloc.c				\
		ft_strchr.c ft_strrchr.c				\
		ft_strnstr.c ft_strjoin.c				\
		ft_strncmp.c ft_atoi.c ft_strtrim.c		\
		ft_isalpha.c ft_isdigit.c ft_isalnum.c	\
		ft_isascii.c ft_isprint.c ft_toupper.c	\
		ft_tolower.c ft_strmapi.c				\
		ft_substr.c ft_split.c ft_itoa.c		\
		ft_putchar_fd.c ft_putstr_fd.c			\
		ft_putendl_fd.c ft_putnbr_fd.c

SRCBONUS = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c	\
			ft_lstclear.c ft_lstdelone.c ft_lstiter.c		\
			ft_lstsize.c ft_lstmap.c ft_lstlast.c

INCLUDE = ./libft.h

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : 
	$(CC) $(CFLAGS) $(SRC)
	$(AR) $(NAME) $(OBJ)

bonuss: $(OBJ) $(OBJBONUS)
	$(AR) $(NAME) $(OBJ) $(OBJBONUS)

clean : 
	rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME) $(SO) $(AOUT)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	$(CC) -shared -o $(SO) $(OBJ)
