/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/23 16:06:09 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    // try
    // {
    //     Bureaucrat bureaucrat(100);
    // }
    // catch (std::exception &e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    Bureaucrat b(100);
    std::cout << "--------->" << b.getName() << "\n";
    std::cout << b;
    return 0;
}