/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/11 12:38:45 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int product(int u, int v)
{
    return u * v;
};
int main()
{
    Harl harl;

    harl.complain("WARNING");
    harl.complain("INFO");
    harl.complain("DEBUG");
    harl.complain("ERROR");
    harl.complain("ERRORxs");
    // typedef int (*t_somefunc)(int, int);

    // int (*t_somefunc[2])(int, int) = {&product, &product};
    // int x2 = t_somefunc[0](5, 4);

    // std::cout << x2;
}