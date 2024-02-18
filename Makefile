NAME	=	push_swap

LIB		=	libft.a

SRCS	=	push_swap.c helper.c

OBJ		=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

LIB_PATH =	libft/

all: $(NAME)

$(NAME):	$(OBJ) $(LIB_PATH) $(LIB)
			$(CC) $(CFLAGS) $(OBJ) -L $(LIB_PATH) -lft -o $(NAME)

$(LIB_PATH) $(LIB):
			$(MAKE) -C $(LIB_PATH)

%.o	 : %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJ)
			$(MAKE) -C $(LIB_PATH) clean

fclean : clean
			$(RM) $(NAME)
			$(MAKE)	-C	$(LIB_PATH)	fclean

re	: fclean all

.PHONY: all clean fclean re