##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile lib
##

SRC	=	./my_putstr.c \
		./my_strlen.c \
		./my_getnbr.c \
		./my_put_nbr.c \
		./my_strcat.c \
		./my_putchar.c \
		./my_strlen.c \
		./my_str_to_word_array.c \
		./my_strcat.c \
		./my_strcmp.c \
		./my_strncmp.c \
		./my_strcpy.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a


$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../

all:    $(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	$(RM) ../libmy.a

fclean: clean
	$(RM) $(NAME)


re:     fclean all
