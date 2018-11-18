##
## EPITECH PROJECT, 2018
## CPool_Day07_2018
## File description:
## libmy makefile
##

CFLAGS=-Wall -Werror -I./
SRC=$(shell find . -type f -name '*.c')
OBJ=$(SRC:.c=.o)

all: link

link: $(OBJ)
	@ar rcs libmy.a $(OBJ)
	@mkdir -p ../../include
	@cp -f ./libmy.a ../libmy.a
	@cp -f ./libmy.a ../../libmy.a
	@cp -f ./my.h ../../include/my.h
	@cp -f ./my_printf/my_printf.h ../../include/my_printf.h

debug: $(SRC)
	@gcc -c $(SRC) $(CFLAGS) -g
	@ar rcs libmy.a $(shell find . -name '*.o')
	@mkdir -p ../../include
	@cp -f ./libmy.a ../libmy.a
	@cp -f ./my.h ../../include/my.h
	@cp -f ./my_printf/my_printf.h ../../include/my_printf.h

clean:
	@rm -f $(OBJ) ./libmy.a ../libmy.a

fclean: clean
	@rm -f ../../include/my.h
	@rm -f ../../include/my_printf.h

re: fclean all

.PHONY: all obj link clean fclean re debug
