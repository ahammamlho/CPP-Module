# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 10:54:22 by lahammam          #+#    #+#              #
#    Updated: 2022/12/08 10:45:57 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	megaphone.cpp

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