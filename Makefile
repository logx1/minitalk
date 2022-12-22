# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 05:15:23 by abdel-ou          #+#    #+#              #
#    Updated: 2022/12/22 21:28:15 by abdel-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME = minitalk.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

CLIENT = client
SERVER = server

#Sources:
SRC_S = server.c ft_printf/*.c libft/*.c
SRC_C = client.c ft_printf/*.c libft/*.c

BONUS_S = server.c ft_printf/*.c libft/*.c
BONUS_C = client.c ft_printf/*.c libft/*.c

OBJ_S = $(SRC_S:%.c=%.o)
OBJ_C = $(SRC_C:%.c=%.o)

BONUS_OBJ_S = $(SRC_S:%.c=%.o)
BONUS_OBJ_C = $(SRC_C:%.c=%.o)


#Rules:
all:$(SERVER) $(CLIENT)


$(SERVER):
	$(CC) $(SRC_S) $(CFLAGS) -o $(SERVER)

$(CLIENT):
	$(CC) $(SRC_C) $(CFLAGS) -o $(CLIENT)

bonus:
	@$(CC) $(BONUS_S) $(CFLAGS) -o $(SERVER)
	@$(CC) $(BONUS_C) $(CFLAGS) -o $(CLIENT)

clean:
	@$(RM) $(OBJ_S)
	@$(RM) $(OBJ_C)
	@$(RM) $(BONUS_OBJ_S)
	@$(RM) $(BONUS_OBJ_C)

fclean: clean
	@$(RM) $(SERVER)
	@$(RM) $(CLIENT)
	@$(RM) $(NAME)

re: fclean all

