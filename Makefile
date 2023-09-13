NAME		= libftprintf.a

SRCS		= ft_printf.c ft_printchar.c ft_printnum.c ft_printhex.c


CC 			= gcc 
RM			= rm -f 
CFLAGS		= -Wall -Werror -Wextra

OBJS		= ${SRCS:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
