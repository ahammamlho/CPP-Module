/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:46:46 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/06 15:04:05 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), target("null"){};

ShrubberyCreationForm::ShrubberyCreationForm(std::string targt)
    : AForm("ShrubberyCreationForm", 145, 137), target(targt){};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old)
    : AForm(old), target(old.target){};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old)
{
    (void)old;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (get_isSigned() == false)
        throw AForm::FormIsNotSigned();
    else if (executor.getGrade() < get_gradeRequiredtoExecute())
        throw AForm::GradeTooLowException();
};

ShrubberyCreationForm::~ShrubberyCreationForm(){};