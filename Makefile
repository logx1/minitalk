# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 05:15:23 by abdel-ou          #+#    #+#              #
#    Updated: 2022/12/25 16:28:17 by abdel-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CLIENT = client
SERVER = server
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
all: $(CLIENT) $(SERVER)
	
$(CLIENT):
	cd libft && make all
	cd ft_printf && make all
	cc $(FLAGS) libft/libft.a ft_printf/libftprintf.a client.c -o $(CLIENT)
$(SERVER):
	cd libft && make all
	cd ft_printf && make all
	cc $(FLAGS) libft/libft.a ft_printf/libftprintf.a server.c -o $(SERVER)

bonus: 
	cd libft && make all
	cd ft_printf && make all
	cc $(FLAGS) libft/libft.a ft_printf/libftprintf.a client_bonus.c -o $(CLIENT)
	cc $(FLAGS) libft/libft.a ft_printf/libftprintf.a server_bonus.c -o $(SERVER)

clean:
	cd libft && make clean
	cd ft_printf && make clean
	cc $(FLAGS) libft/libft.a ft_printf/libftprintf.a client.c -o $(CLIENT)
	cc $(FLAGS) libft/libft.a ft_printf/libftprintf.a server.c -o $(SERVER)
	
fclean:
	cd libft && make fclean
	cd  ft_printf && make fclean
	$(RM) client
	$(RM) server

re:
	cd libft && make re
	cd ft_printf && make re
	cc $(FLAGS) libft/libft.a ft_printf/libftprintf.a client.c -o $(CLIENT)
	cc $(FLAGS) libft/libft.a ft_printf/libftprintf.a server.c -o $(SERVER)
	
