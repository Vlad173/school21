SRCS = main.c ft_atoi.c tail.c
OBJ = ${SRCS:.c=.o}
NAME = ft_tail 

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:	%.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
