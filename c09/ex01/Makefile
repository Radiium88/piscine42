NAME = libft.a
CC= cc
CFLAGS= -Wall -Wextra -Werror
SRC = srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c
HEA= includes/
OBJ= $(SRC:.c=.o)

all: $(NAME)

.c.o:
		$(CC) $(CFLAGS) -I $(HEA) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
