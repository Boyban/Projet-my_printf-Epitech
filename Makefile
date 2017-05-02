##
## Makefile for Makefile in /home/Yohan/CPool_rush2
## 
## Made by Yohan Lequere
## Login   <Yohan@epitech.net>
## 
## Started on  Mon Oct 15 15:12:33 2016 Yohan Lequere
## Last update Mon Nov 21 20:47:42 2016 Yohan Lequere
##

NAME	=	libmy.a

SRC	=	my_revstr.c			\
		my_put_unsignedbin.c		\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_strlen.c			\
		my_printf.c			\
		flag_1-5.c			\
		flag_5-10.c			\
		flag_10-15.c			\
		my_putnbr_unsigned.c		\
		aff_char.c			\
		fonc_redir.c			\
		my_put_hexa.c			

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I./include/

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: 	re clean fclean all
