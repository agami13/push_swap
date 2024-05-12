NAME	=	push_swap

CHECKER	=	checker

SRC		=	srcs/push_swap.c \
			srcs/parcing/parcing.c \
			srcs/struct_funcs/stack_fill.c \
			srcs/parcing/helper_funcs.c \
			srcs/struct_funcs/struct_funcs.c \
			srcs/rules/instructions.c \
			srcs/rules/rules.c \
			srcs/rules/rules2.c \
			srcs/rules/rules3.c \
			srcs/utils/utils.c \
			srcs/sort_funcs/small_sort.c \
			srcs/sort_funcs/big_sort.c \
			srcs/utils/utils2.c \
			srcs/utils/utils3.c \
			srcs/sort_funcs/sort.c \
			srcs/parcing/parse.c

BSRC	=	bonus/checker.c \
			bonus/moves1.c \
			bonus/moves2.c \
			bonus/moves3.c \
			srcs/parcing/parcing.c \
			srcs/struct_funcs/stack_fill.c \
			srcs/parcing/helper_funcs.c \
			srcs/struct_funcs/struct_funcs.c \
			srcs/rules/instructions.c \
			srcs/utils/utils.c \
			srcs/utils/utils2.c \
			srcs/utils/utils3.c \
			srcs/parcing/parse.c \

CC		=	cc

CFLAGS	=	-Wall -Werror -Wextra -g

LIBFT	=	libft/libft.a

OBJ		=	$(SRC:.c=.o)
BOBJ	=	$(BSRC:.c=.o)

all		:	$(NAME)

$(NAME):	$(OBJ) $(LIBFT)
			$(CC) $(CFLAGS) $(OBJ) -L libft/ -lft -o $(NAME)

$(CHECKER):	$(BOBJ) $(LIBFT)
			$(CC) $(CFLAGS) $(BOBJ) -L libft/ -lft -o $(CHECKER)

%.o	 : %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
		make -s -C libft/
clean:
		make clean -s -C libft
		rm -rf $(OBJ) $(BOBJ)

fclean: clean
		rm -rf $(NAME) $(NAME) $(CHECKER)
		make fclean -s -C libft

re:	fclean all

bonus:	$(CHECKER)

.PHONY: all clean fclean re