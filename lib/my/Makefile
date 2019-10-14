##
## EPITECH PROJECT, 2019
## makefile task01
## File description:
## compilation prgrame
##

SRCS 	= 	./*.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	libmy.a

CC	= 	gcc 

RM	=	rm -rf

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) -c $(OBJS)
	ar rc ../$(NAME) $(OBJS)
	cp my.h ../../include

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../$(NAME)
	$(RM) ../../include/my.h

re:	fclean all

.PHONY: all clean fclean re



