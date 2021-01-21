# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youcho <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/12 11:26:30 by youcho            #+#    #+#              #
#    Updated: 2020/02/12 11:26:34 by youcho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_atoi.c ./srcs/ft_char_write.c ./srcs/ft_is.c ./srcs/ft_number_write.c ./srcs/ft_operation.c ./srcs/ft_str_write.c ./srcs/main.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o test
