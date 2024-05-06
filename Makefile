NAME	=	push_swap

CHECKER	=	checker

LIB		=	libft.a

SRCS	=	srcs/push_swap.c \
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
			srcs/parcing/parse.c \

BONUS_SRCS	=	bonus/checker.c \
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

OBJ		=	$(SRCS:.c=.o)

BONUS_OBJ	=	$(BONUS_SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

LIB_PATH =	libft/

all: $(NAME)

$(NAME):	$(OBJ) $(LIB_PATH) $(LIB)
			$(CC) $(CFLAGS) $(OBJ) -L $(LIB_PATH) -lft -o $(NAME)

$(LIB_PATH) $(LIB):
			$(MAKE) -s -C $(LIB_PATH)

%.o	 : %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ) $(BONUS_OBJ)
			$(MAKE) -s -C $(LIB_PATH) clean

fclean : clean
			$(RM) $(NAME) $(CHECKER)
			$(MAKE)	-s -C	$(LIB_PATH)	fclean

re	: fclean all

bonus: $(BONUS_OBJ) $(LIB_PATH) $(LIB)
			$(CC) $(CFLAGS) $(BONUS_OBJ) -L $(LIB_PATH) -lft -o $(CHECKER)

.PHONY: all clean fclean re