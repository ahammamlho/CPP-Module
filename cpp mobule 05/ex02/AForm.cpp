/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:38:13 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/05 19:54:24 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
    : name("name"), isSigned(true), gradeRequiredtoSign(4), gradeRequiredtoExecute(10){};

AForm::AForm(const std::string name, const int gradeSign, const int gradeExecute)
    : name(name), gradeRequiredtoSign(gradeSign), gradeRequiredtoExecute(gradeExecute)
{
    if (gradeRequiredtoSign < 1 || gradeRequiredtoExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeRequiredtoSign > 150 || gradeRequiredtoExecute > 150)
        throw AForm::GradeTooLowException();
};

AForm::AForm(const AForm &old)
    : name(old.name), gradeRequiredtoSign(old.gradeRequiredtoSign), gradeRequiredtoExecute(old.gradeRequiredtoExecute)
{
    this->isSigned = old.isSigned;
};

AForm &AForm::operator=(const AForm &old)
{
    if (this != &old)
        isSigned = old.isSigned;
    return (*this);
};

const char *AForm::GradeTooHighException::what() const throw() { return "Grade Too High"; };
const char *AForm::GradeTooLowException::what() const throw() { return "Greade Too Low"; };
const char *AForm::FormIsNotSigned::what() const throw() { return "Form Is Not Signed"; };

std::string AForm::get_name() const { return name; };
bool AForm::get_isSigned() const { return isSigned; };
int AForm::get_gradeRequiredtoSign() const { return gradeRequiredtoSign; };
int AForm::get_gradeRequiredtoExecute() const { return gradeRequiredtoExecute; };

std::ostream &operator<<(std::ostream &COUT, const AForm &form)
{
    COUT << "- name: " << form.get_name() << std::endl;
    COUT << "- is signed: " << form.get_isSigned() << std::endl;
    COUT << "- grade required to sign: " << form.get_gradeRequiredtoSign() << std::endl;
    COUT << "- grade required to execute: " << form.get_gradeRequiredtoExecute() << std::endl;
    return COUT;
};

void AForm::beSigned(const Bureaucrat &bur)
{

    if (bur.getGrade() >= gradeRequiredtoSign)
        isSigned = true;
    else
        throw AForm::GradeTooLowException();
};

AForm::~AForm(){};