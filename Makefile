NAME = libftprintf.a
SOURCES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_puthex.c

OBJECTS = $(SOURCES:.c=.o)

AR = ar rcs
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
