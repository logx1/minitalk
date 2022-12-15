# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 17:29:56 by abdel-ou          #+#    #+#              #
#    Updated: 2022/12/12 10:37:26 by abdel-ou         ###   ########.fr        #3
#                                                                              #
# **************************************************************************** #

NAME	=	minitalk
SRCS1   =	client.c ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putstr.c ft_printf/ft_putnbr.c 

SRCS2   =	server.c ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putstr.c ft_printf/ft_putnbr.c 



FLAGS	= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -o client $(SRCS1) 
	gcc $(FLAGS) -o server $(SRCS2) 

all:$(NAME)

clean:
	rm -rf client server

fclean:clean
	rm -rf $(NAME)

re:fclean all





