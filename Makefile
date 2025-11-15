NAME = libftprintf
SRC = 
OBJ = $(SRC:.c=.o)

CC = cc	

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) 

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all