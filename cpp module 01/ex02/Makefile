# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:42:37 by lahammam          #+#    #+#              #
#    Updated: 2022/12/14 14:05:00 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp 

OBJSRC = ${SRCS:.cpp=.o}

CC = clang++

%.o:%.cpp
		${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJSRC}
	${CC} ${CFLAGS} ${OBJSRC} -o ${NAME} 

all: ${NAME}

clean:
	rm -f ${OBJSRC}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re 