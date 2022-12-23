/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/23 16:06:42 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat class: Default constructor called" << std::endl;
    name = "Bureaucrat";
};

Bureaucrat::Bureaucrat(const int grd)
{
    std::cout << "Bureaucrat class: int constructor called" << std::endl;
    name = "Bureaucrat";
    if (grd < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grd > 150)
        throw Bureaucrat::GradeTooLowException();
    grade = grd;
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
    {
        // name = old.name;
        grade = old.grade;
    }
    return (*this);
};

std::ostream &operator<<(std::ostream &COUT, const Bureaucrat &bure)
{
    COUT << bure.getName() << " , bureaucrat grade " << bure.getGrade() << std::endl;
    return COUT;
};

void Bureaucrat::increment()
{
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
};
void Bureaucrat::decrement()
{
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
};

std::string Bureaucrat::getName() const { return name; };

int Bureaucrat::getGrade() const { return grade; };

const char *Bureaucrat::GradeTooHighException::what() const throw() { return "GradeTooHighException"; };
const char *Bureaucrat::GradeTooLowException::what() const throw() { return "GradeTooLowException"; };

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat class: Destructor called" << std::endl;
};