/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:38:13 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/24 12:27:22 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeExecute)
    : name(name), gradeRequiredtoSign(gradeSign), gradeRequiredtoExecute(gradeExecute)
{
    std::cout << "Form class: constructor called" << std::endl;
    if (gradeRequiredtoSign < 1 || gradeRequiredtoExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeRequiredtoSign > 150 || gradeRequiredtoExecute > 150)
        throw Form::GradeTooLowException();
};

Form::Form(const Form &old)
    : name(old.name), gradeRequiredtoSign(old.gradeRequiredtoSign), gradeRequiredtoExecute(old.gradeRequiredtoExecute)
{
    std::cout << "Form class: Copy constructor called" << std::endl;
    *this = old;
};

Form &Form::operator=(const Form &old)
{
    std::cout << "Form class: Copy assignment operator called" << std::endl;
    if (this != &old)
        isSigned = old.isSigned;
    return (*this);
};

const char *Form::GradeTooHighException::what() const throw() { return "grade must be > 1"; };
const char *Form::GradeTooLowException::what() const throw() { return "greade must be < 150"; };

std::string Form::get_name() const { return name; };
bool Form::get_isSigned() const { return isSigned; };
int Form::get_gradeRequiredtoSign() const { return gradeRequiredtoSign; };
int Form::get_gradeRequiredtoExecute() const { return gradeRequiredtoExecute; };

Form::~Form()
{
    std::cout << "Form class: Destructor called" << std::endl;
}