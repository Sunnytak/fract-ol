# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stak <stak@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 12:15:25 by stak              #+#    #+#              #
#    Updated: 2024/06/07 12:21:58 by stak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = fractol
CC = cc -g
RM = rm -f
FLAGS = -Wall -Wextra -Werror

SRC=

OBJ = $(SRC:.c=.o)

.c.o:
	$(CC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all:
	$(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
