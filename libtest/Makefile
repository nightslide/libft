NAME = check
SRCS = $(wildcard src/*.c)
OBJECTS = $(SRCS:src/%.c=%.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@ $(CC) $(SRCS) -I includes/ -L./ -lft -o $(NAME)

$(OBJECTS):
	@ $(CC) -c $(CFLAGS) $(SRCS) -I includes/
clean:
	@ rm -f $(OBJECTS)

fclean: clean
	@ rm -f $(NAME)

re: fclean all
