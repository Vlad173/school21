# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vladislove <marvin@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 19:51:44 by vladislov         #+#    #+#              #
#    Updated: 2021/12/28 00:15:35 by pmeredyt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c ft_putchar.c ft_putint.c ft_putstr.c \
		ft_puthex.c

BSRC =	

OBJ = ${SRC:.c=.o}
OBJ_B = ${BSRC:.c=.o}

LIBC = ar rc
LIBR = ranlib

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) 
	ar rcs $(NAME) $?

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus:
	@make OBJ="$(OBJ_B)" all

clean:
	@$(RM) $(OBJ) $(OBJ_B)

fclean:	clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
