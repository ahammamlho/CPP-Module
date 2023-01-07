/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 09:08:34 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Null")
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

const char *Bureaucrat::GradeTooHighException::what() const throw() { return "grade must be > 1"; };
const char *Bureaucrat::GradeTooLowException::what() const throw() { return "greade must be < 150"; };

void Bureaucrat::signForm(AForm &form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.get_name() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << name << " coulnd't sign " << form.get_name() << " because " << e.what() << std::endl;
    }
};

void Bureaucrat::executeForm(AForm &form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.get_name() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << name << " coulnd't execut " << form.get_name() << " because " << e.what() << std::endl;
    }
};

Bureaucrat::~Bureaucrat(){};