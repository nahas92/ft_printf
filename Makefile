NAME = libftprintf.a

SRC =  ft_printf.c \
       print_char.c \
       print_str.c \
       print_pointer.c \
       print_int.c \
       print_unsigned.c \
       print_hex.c \
       utils.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
