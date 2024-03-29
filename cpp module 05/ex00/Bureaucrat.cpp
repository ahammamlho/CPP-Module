/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/06 10:06:01 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("null")
{
    grade = 1;
};

Bureaucrat::Bureaucrat(const int grd, const std::string name) : name(name)
{
    if (grd < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grd > 150)
        throw Bureaucrat::GradeTooLowException();
    grade = grd;
};

Bureaucrat::Bureaucrat(const Bureaucrat &old) : name(old.name), grade(old.grade){};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old)
{
    if (this != &old)
        grade = old.grade;
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

const char *Bureaucrat::GradeTooHighException::what() const throw() { return "Grade Too High"; };
const char *Bureaucrat::GradeTooLowException::what() const throw() { return "Greade Too Low"; };

Bureaucrat::~Bureaucrat(){};