SRCC    =    my_*/*.c
SRCO    =    *.o
NAME    =    libmy.a

all: $(NAME)

$(NAME):
	gcc -c $(SRCC)
	ar rc $(NAME) $(SRCO)
	cp $(NAME) ./../

clean:
	rm -f $(SRCO)

fclean: clean
	rm -rf $(NAME)

re: fclean all