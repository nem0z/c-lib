SRC	=	main.c


LDFLAGS	=	-Lmy_lib/ -lmy

CFLAGS	=	-Iinclude

OBJ	=	$(SRC:.c=.o)

NAME	=	main.out

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./my_lib
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

lib:
	$(MAKE) -C ./my_lib re

clean:
	make -C ./my_lib clean
	rm -f $(OBJ)
	rm -f *.o

fclean:	clean
	make -C ./my_lib fclean
	rm -f my_lib/libmy.a
	rm -f $(NAME)

re:	fclean all