# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbarrios <dbarrios@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/12 11:30:45 by dbarrios          #+#    #+#              #
#    Updated: 2024/10/13 10:16:49 by dbarrios         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del ejecutable
NAME = libft.a

# Compilador y banderas
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archivos fuente
SRC = 	ft_atoi.c \
		ft_itoa.c \
		ft_putnbr_fd.c \
		ft_strlcpy.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_putstr_fd.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_memcmp.c \
		ft_split.c \
		ft_strmapi.c \
		ft_isalnum.c \
		ft_memcpy.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_memmove.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_isascii.c \
		ft_memset.c \
		ft_striteri.c \
		ft_strrchr.c \
		ft_isdigit.c \
		ft_putchar_fd.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_isprint.c \
		ft_putendl_fd.c \
		ft_strlcat.c \
		ft_substr.c

# Archivos objeto
OBJ = $(SRC:.c=.o)

# Reglas
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
