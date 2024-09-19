NAME = libft.a
SRC = hello.c dummy.c
CC = cc
OBJ = $(SRC:.c=.o)

%.o : %.c
	@echo "Compiling $< ..."
	@$(CC) -c $(CFLAGS)  $< -o $@
	@clear

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re