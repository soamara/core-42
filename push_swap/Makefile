# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soamara <soamara@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/25 13:53:08 by soamara           #+#    #+#              #
#    Updated: 2025/07/27 13:48:26 by soamara          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -Iinclude

SRC = src/push_swap.c \
      src/stack_utils.c \
      src/checker.c \
      src/op_push.c \
      src/op_revrotate.c \
      src/op_rotate.c \
      src/op_swap.c \
      src/sort.c \

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
