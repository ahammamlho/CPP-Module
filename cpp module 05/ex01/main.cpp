/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/06 16:36:03 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

    try
    {
        Bureaucrat bureaucrat(47, "ahamm");
        Form form("lho", 143, 53);
        bureaucrat.signForm(form);
        std::cout << form << form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << "\n";
    };

    return 0;
}