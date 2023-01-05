/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.CPP                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:46:46 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/05 11:33:03 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string targt) 
    : target(targt) ,gradetoSign(145),gradetoExecute(137)
{
};

    
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  if (executor.getGrade() >= gradetoSign && executor.getGrade() >= gradetoExecute)
        ;
    else
        throw AForm::GradeTooLowException();
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
};