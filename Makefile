# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 05:15:23 by abdel-ou          #+#    #+#              #
#    Updated: 2022/12/21 05:18:42 by abdel-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	minitalk
SRCS1   =	client.c ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putstr.c ft_printf/ft_putnbr.c ft_printf/ft_strlen.c

SRCS2   =	server.c ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putstr.c ft_printf/ft_putnbr.c 

SRCS_bonus1   =	client_bonus.c ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putstr.c ft_printf/ft_putnbr.c ft_printf/ft_strlen.c

SRCS_bonus2  =	server_bonus.c ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putstr.c ft_printf/ft_putnbr.c 


FLAGS	= -Wall -Wextra -Werror

all:$(NAME)

$(NAME):
	gcc $(FLAGS) -o client $(SRCS1) 
	gcc $(FLAGS) -o server $(SRCS2) 

bonus :
	cc $(FLAGS) -o client $(SRCS_bonus1) 
	cc $(FLAGS) -o server $(SRCS_bonus2) 

clean:
	rm -rf client server

fclean:clean
	rm -rf $(NAME)

re:fclean all





