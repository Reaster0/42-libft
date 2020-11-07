# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/07 15:42:07 by earnaud           #+#    #+#              #
#    Updated: 2020/11/07 15:57:21 by earnaud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
#FILES		= ft_atoi.c \
	ft_isalpha.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_bzero.c \
	ft_isascii.c \
	ft_memchr.c \
	ft_memset.c \
	ft_strlcpy.c \
	ft_strrchr.c \
	ft_calloc.c \
	ft_isdigit.c \
	ft_memcmp.c \
	ft_strchr.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_memcpy.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_toupper.c 
OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
