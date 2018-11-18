##
## EPITECH PROJECT, 2018
## CPool_Day07_2018
## File description:
## standard makefile
##

CFLAGS+= -Wall -I./include -L./lib/my -lmy
SRC=$(wildcard *.c)

all: lib
	@$(MAKE) -C ./lib/my

debug:
	@$(MAKE) -C ./lib/my debug
	gcc idk.c -I./include -L./lib/my -lmy

clean:
	@rm -f $(OBJ)
	@$(MAKE) -C ./lib/my clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C ./lib/my fclean

re: fclean $(NAME)

tests_run:
	gcc -o unit_tests $(shell find ./tests/ -name '*.c') $(filter-out main.c, $(SRC)) \
		--coverage -lcriterion $(CFLAGS)
	./unit_tests

.PHONY: all clean fclean re debug tests_run
