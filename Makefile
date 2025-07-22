# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fconde-p <fconde-p@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 19:20:11 by fconde-p          #+#    #+#              #
#    Updated: 2025/07/22 19:16:16 by fconde-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#nome
NAME = libft.a

SRCS = $(wildcard *.c)
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
