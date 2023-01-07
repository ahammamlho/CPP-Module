/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:38:13 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/06 16:45:10 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : name("name"), isSigned(false), gradeRequiredtoSign(4), gradeRequiredtoExecute(10){};

Form::Form(const std::string name, const int gradeSign, const int gradeExecute)
    : name(name), isSigned(false), gradeRequiredtoSign(gradeSign), gradeRequiredtoExecute(gradeExecute)
{
    if (gradeRequiredtoSign < 1 || gradeRequiredtoExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeRequiredtoSign > 150 || gradeRequiredtoExecute > 150)
        throw Form::GradeTooLowException();
};

Form::Form(const Form &old)
    : name(old.name), gradeRequiredtoSign(old.gradeRequiredtoSign), gradeRequiredtoExecute(old.gradeRequiredtoExecute)
{
    this->isSigned = old.isSigned;
};

Form &Form::operator=(const Form &old)
{
    if (this != &old)
        isSigned = old.isSigned;
    return (*this);
};

const char *Form::GradeTooHighException::what() const throw() { return "Grade Too High"; };
const char *Form::GradeTooLowException::what() const throw() { return "Greade Too Low"; };

std::string Form::get_name() const { return name; };
bool Form::get_isSigned() const { return isSigned; };
int Form::get_gradeRequiredtoSign() const { return gradeRequiredtoSign; };
int Form::get_gradeRequiredtoExecute() const { return gradeRequiredtoExecute; };

std::ostream &operator<<(std::ostream &COUT, const Form &form)
{
    COUT << "- name: " << form.get_name() << std::endl;
    COUT << "- is signed: " << form.get_isSigned() << std::endl;
    COUT << "- grade required to sign: " << form.get_gradeRequiredtoSign() << std::endl;
    COUT << "- grade required to execute: " << form.get_gradeRequiredtoExecute() << std::endl;
    return COUT;
};

void Form::beSigned(const Bureaucrat &bur)
{

    if (bur.getGrade() >= gradeRequiredtoSign)
        isSigned = true;
    else
        throw Form::GradeTooLowException();
};

Form::~Form(){};