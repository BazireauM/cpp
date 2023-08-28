NAME	=	account

SRCS	=	Account.cpp\
			tests.cpp

OBJS	=	$(SRCS:.cpp=.o)

CC		=	g++

CFLAGS	=	-Wall -Werror -Wextra

rm		=	rm -f

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean $(NAME)