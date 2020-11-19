##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	sources/main.c			\
		sources/bombyx.c		\
		sources/parser.c		\
		sources/compute_no_range.c	\
		sources/compute_range.c		\

OBJ	=	$(SRC:%.c=%.o)

NAME	=	106bombyx

CFLAGS	=	-I ./include/ -W

CC	=	gcc

LIB	=	-L lib/ -lmy -lget-next-line -lmy-printf -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	make -C lib/get_next_line
	make -C lib/my_printf
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	make -C lib/my clean
	make -C lib/get_next_line clean
	make -C lib/my_printf clean
	rm -f $(OBJ)

fclean:		clean
	make -C lib/my fclean
	make -C lib/get_next_line fclean
	make -C lib/my_printf fclean
	rm -f $(NAME)

re:		fclean all
