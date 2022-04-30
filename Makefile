SRCS = ft_printf.c ft_choice.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

HEAD = includes

GCC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

RANLIB = ranlib

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS} libft.a
	${RANLIB} ${NAME}

all: ${NAME}

clean: 
	${RM} ${OBJS}
	
fclean: clean
	${RM} ${NAME} 

re:	fclean all

.PHONY: all fclean clean re
