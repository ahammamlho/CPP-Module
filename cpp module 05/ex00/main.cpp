/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/06 10:07:27 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{

    try
    {
        Bureaucrat bureaucrat(100, "name");
        Bureaucrat tr(bureaucrat);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}