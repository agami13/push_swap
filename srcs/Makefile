NAME	=	push_swap

LIB		=	libft.a

SRCS	=	push_swap.c parcing.c stack_fill.c helper_funcs.c struct_funcs.c \
			instructions.c rules.c rules2.c utils.c small_sort.c \

OBJ		=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror -g

LIB_PATH =	../libft/

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