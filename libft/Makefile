# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stak <stak@student.hive.fi>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 11:25:46 by stak              #+#    #+#              #
#    Updated: 2024/05/06 16:53:44 by stak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SOURCE  = ft_atoi.c \
			 ft_bzero.c \
			 ft_calloc.c \
			 ft_isalnum.c \
			 ft_isalpha.c \
			 ft_isascii.c \
			 ft_isdigit.c \
			 ft_isprint.c \
			 ft_memchr.c \
			 ft_memcmp.c \
			 ft_memcpy.c \
			 ft_memmove.c \
			 ft_memset.c \
			 ft_strchr.c \
			 ft_strdup.c \
			 ft_strlcat.c \
			 ft_strlcpy.c \
			 ft_strlen.c \
			 ft_strncmp.c \
			 ft_strnstr.c \
			 ft_strrchr.c \
			 ft_tolower.c \
			 ft_toupper.c \
			 ft_substr.c \
			 ft_strjoin.c \
			 ft_strtrim.c \
			 ft_putchar_fd.c \
			 ft_putstr_fd.c \
			 ft_putnbr_fd.c \
			 ft_putendl_fd.c \
			 ft_striteri.c \
			 ft_strmapi.c \
			 ft_itoa.c \
			 ft_split.c \
			 ft_printf.c \
			 ft_hexconvert.c \
			 ft_printchar.c \
			 ft_printnbr.c \
			 ft_printstr.c \
			 ft_print_unsigned.c \
			 ft_print_ptr.c \
			 ft_lstnew_bonus.c \
			 ft_lstadd_front_bonus.c \
			 ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c \
			 ft_lstadd_back_bonus.c \
			 ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c \
			 ft_lstiter_bonus.c \
			 ft_lstmap_bonus.c \

OBJECTS = $(MY_SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

CC: HCC

CFLAGS += -Wall -Wextra -Werror

clean: 
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re