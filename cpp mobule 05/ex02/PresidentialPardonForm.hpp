/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:44:16 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/06 17:53:21 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESEDENT_HPP
#define PRESEDENT_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
private:
    const std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &old);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &old);
    ~PresidentialPardonForm();

    void execute(Bureaucrat const &executor) const;
};

#endif