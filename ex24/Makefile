#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyshin <kirikeria@gmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 15:32:35 by hyshin            #+#    #+#              #
#    Updated: 2019/10/18 17:56:49 by hyshin           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INC = includes/ft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS) -I $(INC)
	ar rc libft.a $(OBJS)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re