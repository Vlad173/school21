SRCS = main.c 
OBJ = ${SRCS:.c=.o}
NAME = ft_display_file

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
