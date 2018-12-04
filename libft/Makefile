NAME = libft.a
SRCS = $(wildcard ft_*.c)
OBJECTS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@ ar rc $(NAME) $(OBJECTS)
	@ ranlib $(NAME)

$(OBJECTS):
	@ $(CC) -c $(CFLAGS) $(SRCS)
clean:
	@ rm -f $(OBJECTS)

fclean: clean
	@ rm -f $(NAME)

re: fclean all
