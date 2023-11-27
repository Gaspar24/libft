# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 15:27:14 by msacaliu          #+#    #+#              #
#    Updated: 2023/11/27 13:34:48 by msacaliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
 		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		ft_split.c
BSRC = ft_lstnew.c

all: $(NAME) bonus

$(NAME):
	cc $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)
	rm -f *.o
bonus:
	cc $(FLAGS) -c $(BSRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)
	rm -f *.o

clean:
	rm -f *.o

fclean:clean
	rm -f $(NAME) bonus

re: fclean all

.PHONY: all bonus clean fclean re