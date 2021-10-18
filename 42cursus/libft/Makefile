SRC = isalpha.c isdigit.c isalnum.c isascii.c isprint.c strlen.c \
	  memset.c bzero.c memcpy.c memmove.c strlcpy.c strlcat.c \
	  toupper.c tolower.c strchr.c strrchr.c strncmp.c memchr.c \
	  memcmp.c strnstr.c atoi.c calloc.c strdup.c \
	  substr.c strjoin.c strtrim.c split.c itoa.c strmapi.c striteri.c \
	  putstr_fd.c putchar_fd.c putendl_fd.c putnbr_fd.c \

BSRC = lstnew_bonus.c lstadd_front_bonus.c lstsize_bonus.c lstlast_bonus.c \
	  lstadd_back_bonus.c lstdelone_bonus.c lstclear_bonus.c lstiter_bonus.c \
	  lstmap_bonus.c

OBJ = ${SRC:.c=.o}
BOBJ = ${BSRC:.c=.o}

OBJ_DIR = obj
SRC_DIR = src
INC_DIR = include

OBJS = $(addprefix $(OBJ_DIR)/,$(OBJ))
SRCS = $(addprefix $(SRC_DIR)/,$(SRC))
BOBJS = $(addprefix $(OBJ_DIR)/,$(BOBJ))

NAME = libft.a
LIBC = ar rc
LIBR = ranlib

CC = gcc
RM = rm -f
MK = mkdir -p obj
CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS) 
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

bonus: $(BOBJS)
	$(LIBC) $(NAME) $^ $(OBJS)
	$(LIBR) $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/libft.h
	@$(MK) $(OBJ_DIR)
	$(CC) $(CFLAGS) -I include -c $< -o $@

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all
