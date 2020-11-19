##
## EPITECH PROJECT, 2019
## get_next_line Makefile
## File description:
## get_next_line Makefile
##

SRC	=	get_next_line.c		\

OBJ	=	$(SRC:%.c=%.o)

CFLAGS	=	-I ../../include/

NAME	=	libget-next-line.a

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f ../$(NAME)

re:		fclean all
