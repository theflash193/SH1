#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/10 11:39:32 by grass-kw          #+#    #+#              #
#    Updated: 2015/02/10 11:39:32 by grass-kw         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc

NAME = ft_minishell1

HEAD = ./libft

IFLAGS = -I . -I ./libft/includes

LIB = ./libft/libft.a

FLAGS = -Wall -Werror -Wextra -g

SRC = main.c fill_env.c minishell.c ft_prompt.c parse.c ft_strtrim2.c \
	ft_strsplit2.c exec_cmd.c check_bultins.c ft_cd.c


OBJ = $(SRC:.c=.o)

RM = rm -rf

all: libft $(NAME)

libft:
	make -C $(HEAD)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) $(IFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ) $(NAME).dSYM


fclean: clean
	$(RM) $(NAME)
re: fclean all

gdb: $(OBJ)
	$(CC) $(OBJ) $(LIB) -o $(NAME)
	gdb $(NAME) -w

.PHONY: all libft clean fclean re gdb
