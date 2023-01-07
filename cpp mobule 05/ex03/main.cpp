/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 11:11:10 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat burea(148, "lh");
    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("Shrubbery request", "Bender");

    try
    {
        rrf->beSigned(burea);
        rrf->execute(burea);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    delete rrf;
    return 0;
}