NAME = check
SRCS = $(wildcard src/*.c)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@ $(CC) $(CFLAGS) $(SRCS) -I includes/ -L./ -lft -o $(NAME)

fclean:
	@ rm -f $(NAME)

re: fclean all
