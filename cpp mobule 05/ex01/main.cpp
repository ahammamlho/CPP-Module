/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/26 22:22:00 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat(4277, "aha");
        Form form("lh", 43, 53);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << "\n";
    };

    return 0;
}