# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cterrasi <cterrasi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 19:45:55 by cterrasi          #+#    #+#              #
#    Updated: 2022/03/23 20:11:11 by cterrasi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
CC = gcc
CC_FLAGS = -Wall -Werror -Wextra -I
RM_RF = rm -rfv
NAME = libft.a

# Objectives
all: $(NAME)
$(NAME):	$(OBJS)
			ar crs $(NAME) $(OBJS)
clean:
			$(RM_RF) $(OBJS)
fclean:		clean
			$(RM_RF) $(NAME)
re:			fclean all
.PHONY:		all clean fclean re