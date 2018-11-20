NAME = libft.a
SRCS = $(wildcard *.c)
OBJECTS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@ ar rc $(NAME) $(OBJECTS)
	@ ranlib $(NAME)

$(OBJECTS):
	@ $(CC) -c $(CFLAGS) $(SRCS) -I includes/
clean:
	@ rm -f $(OBJECTS)

fclean: clean
	@ rm -f $(NAME)

re: fclean all
