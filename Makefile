# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allegare <allegare@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 14:50:37 by allegare          #+#    #+#              #
#    Updated: 2024/03/11 16:42:24 by allegare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_atoi.c\
		ft_calloc.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strrchr.c\
		ft_tolower.c ft_toupper.c ft_strchr.c ft_strdup.c ft_strjoin.c\
		ft_substr.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
		ft_striteri.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c
FLAG = -Wall -Werror -Wextra -g
GCC = gcc $(FLAG)
OBJ = $(SOURCE:.c=.o)



all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs libft.a $(OBJ)
clean:
		rm -f $(OBJ) a.out
fclean:	clean
		rm -f libft.a
re:	fclean all

.PHONY: all clean fclean re
