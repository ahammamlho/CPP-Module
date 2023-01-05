/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/05 11:35:10 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(const int grd, const std::string name);
    Bureaucrat(const Bureaucrat &old);
    Bureaucrat &operator=(const Bureaucrat &old);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void increment();
    void decrement();

    void signForm(AForm &form) const;
    void executeForm(AForm &form) const;

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
};

std::ostream &operator<<(std::ostream &COUT, const Bureaucrat &bure);

#endif