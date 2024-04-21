NAME	=	push_swap

LIB		=	libft.a

SRCS	=	srcs/push_swap.c \
			srcs/parcing/parcing.c \
			srcs/struct_funcs/stack_fill.c \
			srcs/parcing/helper_funcs.c \
			srcs/struct_funcs/struct_funcs.c \
			srcs/rules/instructions.c \
			srcs/rules/rules.c \
			srcs/rules/rules2.c \
			srcs/utils/utils.c \
			srcs/sort_funcs/small_sort.c \
			srcs/sort_funcs/big_sort.c \
			srcs/utils/utils2.c \
			srcs/utils/utils3.c \

OBJ		=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror -g

LIB_PATH =	libft/

all: $(NAME)

$(NAME):	$(OBJ) $(LIB_PATH) $(LIB)
			$(CC) $(CFLAGS) $(OBJ) -L $(LIB_PATH) -lft -o $(NAME)

$(LIB_PATH) $(LIB):
			$(MAKE) -s -C $(LIB_PATH)

%.o	 : %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ)
			$(MAKE) -s -C $(LIB_PATH) clean

fclean : clean
			$(RM) $(NAME)
			$(MAKE)	-s -C	$(LIB_PATH)	fclean

re	: fclean all

.PHONY: all clean fclean re