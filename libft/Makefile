# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iporfiri <iporfiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 19:06:47 by iporfiri          #+#    #+#              #
#    Updated: 2022/09/22 23:13:39 by iporfiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

FLAGS = -Wall\
        -Wextra\
        -Werror

SRC = ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isprint.c\
ft_isdigit.c\
ft_strlen.c \
ft_tolower.c\
ft_toupper.c\
ft_strncmp.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_strdup.c\
ft_memset.c\
ft_memmove.c\
ft_memcpy.c\
ft_atoi.c\
ft_memchr.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_striteri.c\
ft_strjoin.c\
ft_strmapi.c\
ft_strnstr.c\
ft_memcmp.c\
ft_strchr.c\
ft_strrchr.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strtrim.c\
ft_substr.c\
ft_calloc.c\
ft_itoa.c\
ft_split.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(FLAGS) -c $(SRC)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all