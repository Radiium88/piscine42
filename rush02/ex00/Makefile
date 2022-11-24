CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ./srcs/arrangement.c ./srcs/coreutils.c ./srcs/main.c ./srcs/strstr.c
OBJS = ${SRCS:.c=.o}
NAME = rush-02
.c.o : 
	$(CC) $(CFLAGS) -I header/ -c $< -o ${<:.c=.o}
${NAME} : 	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
clean :
	rm -f ${OBJS}
fclean : 	clean
			rm -f ${NAME}
re :	fclean all

.PHONY : all clean fclean re
