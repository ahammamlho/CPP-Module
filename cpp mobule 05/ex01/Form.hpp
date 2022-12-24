/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:38:15 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/24 12:25:51 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string.h>
class Form
{

private:
    const std::string name;
    bool isSigned;
    const int gradeRequiredtoSign;
    const int gradeRequiredtoExecute;

public:
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
};

#endif
