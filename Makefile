##
## EPITECH PROJECT, 2025
## minishell
## File description:
## Makefile
##

CC      =   epiclang
CFLAGS  =   -Wall -Wextra -Iinclude
NAME    =   test-choco

SRC_DIR =   src
SRCS    =   $(wildcard $(SRC_DIR)/*.c)
OBJS    =   $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re