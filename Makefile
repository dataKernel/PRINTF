SRCS = ft_printf.c ft_choice.c ft_hexa.c

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

${NAME}: ${OBJS} ./libft/libft.a
	${AR} ${NAME} ${OBJS} ./libft/libft.a
	${RANLIB} ${NAME}

all: ${NAME}

libft/libft.a:
	make -C libft

clean: 
	${RM} ${OBJS}
	
fclean: clean
	${RM} ${NAME} 

re:	fclean all

.PHONY: all fclean clean re
