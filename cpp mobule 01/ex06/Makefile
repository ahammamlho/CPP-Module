# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:42:37 by lahammam          #+#    #+#              #
#    Updated: 2022/12/14 13:57:28 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp Harl.cpp

Include	= Harl.hpp

OBJSRC = ${SRCS:.cpp=.o}

CC = clang++

%.o:%.cpp ${Include}
		${CC} ${CFLAGS} -g -c $< -o $@

$(NAME): ${OBJSRC} ${Include}
	${CC} ${CFLAGS} ${OBJSRC} -o ${NAME} 

all: ${NAME}

clean:
	rm -f ${OBJSRC}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re 