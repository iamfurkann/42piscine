NAME = libft.a
SRC_DIR = srcs
INCLUDE_DIR = includes
SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ_PATHS = $(addprefix $(SRC_DIR)/, $(OBJ_FILES))
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJ_PATHS)
	$(AR) $(NAME) $(OBJ_PATHS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INCLUDE_DIR)/ft.h
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJ_PATHS)

fclean: clean
	rm -f $(NAME)

re: fclean all
.PHONY: all clean fclean re
