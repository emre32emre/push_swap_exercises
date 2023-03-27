CC = gcc
NAME = push_swap
LIBFT = ./lib/libft
DIR_SRC = src
DIR_OBJ = temp
HEADERS = incl
FLAGS = #-Wall -Wextra -Werror
LIBFTFLAGS = -L$(LIBFT) -lft

SOURCES =	main.c \
			init_stack.c \
			utils/ft_error_messages.c \
			utils/ft_stack_utils.c \
			utils/ft_stack_utils2.c \
			ft_stack/ft_pop.c \
			ft_stack/ft_push.c \
			ft_stack/ft_print_stack.c \
			ft_stack/ft_peek.c \
			ft_stack/ft_check.c \
			ft_stack/ft_size_stack.c \
			sort/ft_check_sorted.c \
			sort/ft_sort_big.c \
			sort/ft_sort_three.c \
			sort/ft_rotate_type.c \
			sort/solver_utils_ab.c \
			rules/rule_s.c \
			rules/rule_p.c \
			rules/rule_r.c \
			rules/rule_rr.c
		
SRCS = $(addprefix $(DIR_SRC)/,$(SOURCES))
OBJS = $(addprefix $(DIR_OBJ)/,$(SOURCES:.c=.o))

all: $(DIR_OBJ) $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	$(CC) $(FLAGS) $(LIBFTFLAGS) -o $@ $^

$(DIR_OBJ):
	@mkdir -p temp
	@mkdir -p temp/utils
	@mkdir -p temp/ft_stack
	@mkdir -p temp/rules
	@mkdir -p temp/sort
	
$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c $(HEADERS)/$(NAME).h
	@$(CC) $(FLAGS) -I $(HEADERS) -c -o $@ $<
			
clean:
	@/bin/rm -f $(OBJS)
	@make -C $(LIBFT) clean
	@/bin/rm -rf $(DIR_OBJ)
fclean: clean
	@/bin/rm -f $(NAME)
	@make -C $(LIBFT) fclean

run: clean all
	./$(NAME)

.PHONY: all, $(DIR_OBJ), clean, fclean, norm