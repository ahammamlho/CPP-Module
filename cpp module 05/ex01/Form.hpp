/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:38:15 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/06 16:30:39 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:
    const std::string name;
    bool isSigned;
    const int gradeRequiredtoSign;
    const int gradeRequiredtoExecute;

public:
    Form();
    Form(const std::string name, const int gradeSign, const int gradeExecute);
    Form(const Form &old);
    Form &operator=(const Form &old);
    ~Form();

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

    std::string get_name() const;
    bool get_isSigned() const;
    int get_gradeRequiredtoSign() const;
    int get_gradeRequiredtoExecute() const;

    void beSigned(const Bureaucrat &bur);
};

std::ostream &operator<<(std::ostream &COUT, const Form &form);

#endif
