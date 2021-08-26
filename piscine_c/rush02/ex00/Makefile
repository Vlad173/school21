SRCS = main.c checker.c dictionary.c ft_strjoin.c print_messages.c ft_split.c parse.c list.c utils.c
OBJ = ${SRCS:.c=.o}
NAME = rush-02

RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	$(CC) $(OBJ) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS)  -c $< -o $@

clean:
	$(RM) $(OBJ) 123

fclean:	clean
	$(RM) $(NAME)

re: fclean all
