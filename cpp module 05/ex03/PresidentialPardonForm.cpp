/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:46:46 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 10:16:58 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 25, 5), target("null"){};

PresidentialPardonForm::PresidentialPardonForm(std::string targt)
    : AForm("PresidentialPardonForm", 25, 5), target(targt){};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old)
    : AForm(old), target(old.target){};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &old)
{
    (void)old;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (get_isSigned() == false)
        throw AForm::FormIsNotSigned();
    else if (executor.getGrade() < get_gradeRequiredtoExecute())
        throw AForm::GradeTooLowException();

    std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
};

PresidentialPardonForm::~PresidentialPardonForm(){};