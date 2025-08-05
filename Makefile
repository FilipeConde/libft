# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 19:20:11 by fconde-p          #+#    #+#              #
#    Updated: 2025/08/05 17:53:15 by fconde-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#nome
NAME = libft.a

# SRCS = $(wildcard *.c)
SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_bzero.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strnstr.c \
	ft_memcmp.c \
	ft_memchr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \

OBJ = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wextra -Werror -Wall

# execução padrão, depende da existência e atualização de libft.a
all: $(NAME)

# constrói biblioteca libft.a
# $@ para alvo NAME, $^ para dependências OBJ
$(NAME): $(OBJ)
# 	ar rcs $? -o 
	ar rcs $@ $^

# gera arquivos .o
%.o: %.c
	$(CC) $(CFLAGS) -c $(<) -o $(@)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f libft.a

re: fclean all
