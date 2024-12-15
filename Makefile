##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC		=		main.c \
				sources/read_me.c \
				sources/create_map.c \
				sources/calc_size_file.c \
				sources/open_and_read.c \
				sources/print_the_map.c \
				sources/get_pos.c \
				sources/update_map.c \
				sources/update_map_two.c \
				sources/initialise_window.c \
				sources/error_handling.c \
				sources/error_handling_two.c \
				sources/loop_main.c \
				sources/for_the_win.c \
				sources/for_the_lose.c \
				
OBJ     =       $(SRC:.c=.o)

NAME    =       my_sokoban

LIBMY	=	lib/my/libmy.a

TEST_NAME	=	unit_tests

CPPFLAGS	=	-I ./include -g3

all:    $(NAME)

$(LIBMY):
	make	-C		lib/my/

$(NAME):        $(LIBMY) $(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy $(CFLAGS) -lncurses

clean:
	$(RM) $(OBJ)

fclean: clean
	make fclean -C lib/my
	$(RM) $(NAME)

re:     fclean all

$(TEST_NAME):   $(LIBMY) $(OBJ)
		gcc -o $(TEST_NAME) $(OBJ) $(LIBMY) tests/test.c -lcriterion --coverage

tests_run:		unit_tests
		./$(TEST_NAME) $(LIBMY)
