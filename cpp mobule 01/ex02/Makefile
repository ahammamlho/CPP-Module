# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:42:37 by lahammam          #+#    #+#              #
#    Updated: 2022/12/08 15:04:03 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp 

OBJSRC = ${SRCS:.cpp=.o}

CC = clang++

%.o:%.c
		${CC} ${CFLAGS} -g -c $< -o $@

$(NAME): ${OBJSRC}
	${CC} ${CFLAGS} ${OBJSRC} -o ${NAME} 

all: ${NAME}

clean:
	rm -f ${OBJSRC}

fclean: clean
	rm -f ${NAME}

re: fclean all