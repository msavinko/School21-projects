# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marlean <marlean@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 16:17:56 by marlean           #+#    #+#              #
#    Updated: 2021/11/23 20:16:09 by marlean          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c ft_utils.c ft_hex.c ft_nbr.c

HEADER	=	ft_printf.h

OBJ		=	$(patsubst %.c,%.o,$(SRCS))

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		= 	rm -f

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	$(RM) $(OBJ) $(OBJ_B)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all