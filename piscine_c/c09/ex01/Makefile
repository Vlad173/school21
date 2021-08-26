SRCS = ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c
OBJ = ${SRCS:.c=.o}
SRC_DIR = srcs

OBJS = $(addprefix $(SRC_DIR)/,$(OBJ))

NAME = libft.a
LIBC = ar rc
LIBR = ranlib

INC_DIR = includes
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS) 
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c 
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
