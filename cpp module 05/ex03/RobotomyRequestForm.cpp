/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:46:46 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 10:18:28 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", 72, 45), target("null"){};

RobotomyRequestForm::RobotomyRequestForm(std::string targt)
    : AForm("RobotomyRequestForm", 72, 45), target(targt){};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old)
    : AForm(old), target(old.target){};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &old)
{
    (void)old;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (get_isSigned() == false)
        throw AForm::FormIsNotSigned();
    else if (executor.getGrade() < get_gradeRequiredtoExecute())
        throw AForm::GradeTooLowException();
    int rnd = rand() % 2;
    if (rnd)
        std::cout << "bla bla" << target << " has been robotomized\n";
    else
        std::cout << target << ": robotomy failed\n";
};

RobotomyRequestForm::~RobotomyRequestForm(){};