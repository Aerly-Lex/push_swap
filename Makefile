NAME = push_swap

CC = cc

FLAGS = -Wall -Werror -Wextra

SRC =	push_swap.c \
		sorting/ft_sqrt.c sorting/medium_sort.c sorting/small_sort.c sorting/big_sort.c sorting/init_sort.c \
		error/ft_duplicates.c error/ft_error.c error/liberator.c error/sort_check.c \
		sorting_operators/push.c sorting_operators/reverse_rotate.c \
		sorting_operators/rotate.c sorting_operators/swap.c \
		stack_creator/ft_atoi.c stack_creator/ft_free_str.c stack_creator/ft_isdigit.c \
		stack_creator/ft_lstadd_back.c stack_creator/ft_lstnew.c stack_creator/ft_lstsize.c \
		stack_creator/ft_split.c stack_creator/ft_strlcpy.c stack_creator/insert_index.c \
		stack_creator/stack_generator.c stack_creator/ft_lstlast.c\

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "Compiled successfully: $(NAME)"

all: $(NAME)

clean:
	@rm -f *.o $(OBJ)
	@echo "Objectfiles removed"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean re
