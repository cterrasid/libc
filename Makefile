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
SRCS =		ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c \
			ft_striteri.c ft_split.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
			ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
			ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJS =		$(SRCS:.c=.o)
CC =		gcc
CC_FLAGS =	-Wall -Werror -Wextra -I
RM_RF =		rm -rfv
NAME =		libft.a

# Objectives
all:		$(NAME)
$(NAME):	$(OBJS)
			ar crs $(NAME) $(OBJS)
clean:
			$(RM_RF) $(OBJS)
fclean:		clean
			$(RM_RF) $(NAME)
re:			fclean all
.PHONY:		all clean fclean re