# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ecortes- <ecortes-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 16:05:04 by ecortes-          #+#    #+#              #
#    Updated: 2023/11/21 16:10:23 by ecortes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_char.c ft_dig.c ft_str.c ft_print_format.c \
ft_ptr.c main.c

OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address
AR = ar
ARFLAGS = rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
