SRCS = functions.c main.c atoi.c ft_putnbr.c
OBJ = ${SRCS:.c=.o}
NAME = do-op

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
