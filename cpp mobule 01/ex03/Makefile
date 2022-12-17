# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:42:37 by lahammam          #+#    #+#              #
#    Updated: 2022/12/14 14:45:24 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp Weapon.cpp HumanB.cpp HumanA.cpp

Include	= Weapon.h HumanA.h HumanB.h

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

.PHONY: all clean fclean re 