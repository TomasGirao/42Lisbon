# Compiler and flagss
CC = cc
CFlags = -Wall -Wextra -Werror

# Directories
SRC_DIR = srcs
INC_DIR = includes

# Source files and object files
SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ_FILES = $(SRC_FILES:.c=.o)

# Executable name
NAME = libft.a

# Paths
SRC = $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJ = $(addprefix $(SRC_DIR)/,$(OBJ_FILES))
INC = -I$(INC_DIR)

# Rules
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating $(NAME)..."
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(NAME) created successfully!"

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo "Cleaning object files..."
	@rm -f $(OBJ)
	@echo "Object files cleaned!"

fclean: clean
	@echo "Cleaning $(NAME)..."
	@rm -f $(NAME)
	@echo "$(NAME) cleaned!"

re: fclean all
