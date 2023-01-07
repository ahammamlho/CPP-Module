/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 10:03:19 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 10:31:52 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){};

Intern::Intern(const Intern &old)
{
    *this = old;
};
Intern &Intern::operator=(const Intern &old)
{
    (void)old;
    return *this;
};

AForm *Intern::makeForm(std::string nameForm, std::string target)
{
    std::string typeForms[3] = {
        "robotomy request",
        "Shrubbery request",
        "Presidential request",
    };
    AForm *tmp;
    tmp = 0;
    AForm *forms[3] = {
        new RobotomyRequestForm(target),
        new ShrubberyCreationForm(target),
        new PresidentialPardonForm(target),
    };

    for (size_t i = 0; i < 3; i++)
    {
        if (nameForm == typeForms[i])
        {
            std::cout << "Intern creates " << target << std::endl;
            tmp = forms[i];
        }
        else
            delete forms[i];
    }
    if (!tmp)
        std::cout << nameForm << ": Form doesn’t exist." << std::endl;
    return tmp;
};
Intern::~Intern(){};
