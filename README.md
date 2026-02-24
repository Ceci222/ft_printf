NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC = 

OBJ = $(SRC:.c=.o)

HEADERS = libft.h

all:$(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
 
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean

