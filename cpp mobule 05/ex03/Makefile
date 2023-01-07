# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:42:37 by lahammam          #+#    #+#              #
#    Updated: 2023/01/07 10:04:04 by lahammam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp  Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp  \
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

Include	= Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp \
		  RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

OBJSRC = ${SRCS:.cpp=.o}

CC = c++

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