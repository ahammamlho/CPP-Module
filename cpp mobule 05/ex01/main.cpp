/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/24 12:31:44 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Form form("name", 12, 13);

    Form f(form);

    f = form;

    std::cout << form.get_name() << std::endl;
    std::cout << form.get_gradeRequiredtoExecute() << std::endl;
    std::cout << form.get_gradeRequiredtoSign() << std::endl;
    return 0;
}