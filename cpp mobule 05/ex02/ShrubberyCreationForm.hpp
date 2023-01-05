/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:44:16 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/05 11:24:01 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
private:
    const std::string target;
    const int gradetoSign;
    const int gradetoExecute;

public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const &executor) const;
};

#endif