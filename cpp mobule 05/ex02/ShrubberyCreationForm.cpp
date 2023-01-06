/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:46:46 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/05 19:56:13 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), target("null"){};

ShrubberyCreationForm::ShrubberyCreationForm(std::string targt)
    : AForm("ShrubberyCreationForm", 145, 137), target(targt){};

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (get_isSigned() == false)
        throw AForm::FormIsNotSigned();
    else if (executor.getGrade() < get_gradeRequiredtoExecute())
        throw AForm::GradeTooLowException();
    // tre
};

ShrubberyCreationForm::~ShrubberyCreationForm(){};