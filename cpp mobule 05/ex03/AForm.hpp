/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:38:15 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 10:06:21 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

private:
    const std::string name;
    bool isSigned;
    const int gradeRequiredtoSign;
    const int gradeRequiredtoExecute;

public:
    AForm();
    AForm(const std::string name, const int gradeSign, const int gradeExecute);
    AForm(const AForm &old);
    AForm &operator=(const AForm &old);
    virtual ~AForm();

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class FormIsNotSigned : public std::exception
    {
    public:
        const char *what() const throw();
    };

    std::string get_name() const;
    bool get_isSigned() const;
    int get_gradeRequiredtoSign() const;
    int get_gradeRequiredtoExecute() const;

    void beSigned(const Bureaucrat &bur);
    virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &COUT, const AForm &form);

#endif
