# Source files and object files
CFILES := $(wildcard *.c)
		
OFILES := $(CFILES:.c=.o)

# Compiler and flags
CFLAGS := -Wall -Wextra -Werror

# Output library name
NAME := libft.a

# Default target
all: $(NAME) clean

# Build the static library
$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

# Clean object files
clean:
	rm -f $(OFILES)

# Clean object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean $(NAME)

# Phony targets to avoid conflicts with file names
.PHONY: all clean fclean re