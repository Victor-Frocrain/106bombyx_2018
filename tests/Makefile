##
## EPITECH PROJECT, 2019
## tests Makefile
## File description:
## tests Makefile
##

SRC	=	test_my_printf.c	\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=	-I ../include/

LIB	=	-L ../lib/ -lmy -lget-next-line -lmy-printf

NAME	=	Unit_test

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
	make -C ../
	$(CC) -o $(NAME) $(OBJ) $(LIB) -lcriterion --coverage

clean:
	make -C ../ clean
	rm -f $(OBJ)

fclean:		clean
	make -C ../ fclean
	rm -f $(NAME)

re: 		fclean all
