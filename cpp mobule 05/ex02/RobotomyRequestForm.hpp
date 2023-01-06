/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:44:16 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/06 17:53:21 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMRF_HPP
#define ROBOTOMRF_HPP
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
private:
    const std::string target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &old);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &old);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const &executor) const;
};

#endif