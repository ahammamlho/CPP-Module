# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:42:37 by lahammam          #+#    #+#              #
#    Updated: 2022/12/19 17:31:25 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp  Fixed.cpp Point.cpp bsp.cpp

Include	= Fixed.hpp Point.hpp

OBJSRC = ${SRCS:.cpp=.o}

CC = clang++

%.o:%.cpp ${Include}
		${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJSRC}
	${CC} ${CFLAGS} ${OBJSRC} -o ${NAME} 

all: ${NAME}

clean:
	rm -f ${OBJSRC}

fclean: clean
	rm -f ${NAME}

re: fclean all