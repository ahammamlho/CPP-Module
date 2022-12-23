/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/23 12:26:20 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    name = "Bureaucrat";
    std::cout << "Bureaucrat class: Default constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(const int grd)
{
    if (grd < 1)
        throw "Bureaucrat::GradeTooHighException";
    else if (grd > 150)
        throw "Bureaucrat::GradeTooLowException";
    grade = grd;
    std::cout << "Bureaucrat class: int constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &old)
{
    std::cout << "Bureaucrat class: Copy constructor called" << std::endl;
    *this = old;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old)
{
    std::cout << "Bureaucrat class: Copy assignment operator called" << std::endl;
    if (this != &old)
        grade = old.grade;
    return (*this);
};

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat class: Destructor called" << std::endl;
};