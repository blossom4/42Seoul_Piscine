CC = gcc
CFLAG = -Wall -Werror -Wextra
NAME = rush-02
PATH_SRCS = ./srcs/
SRCS = main.c ft_print.c line.c ft_hash.c str.c error.c ft_convert_input.c
HEAD = ./includes/
RM = rm -f

all : $(NAME)

$(NAME) : 
	$(CC) $(CFLAG) $(addprefix $(PATH_SRCS),$(SRCS)) -o $(NAME) -I$(HEAD)

fclean	: 
	$(RM) $(NAME)
re		: fclean all

dict	: 
	cat ./dictionary/numbers.dict
