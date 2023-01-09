/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/09 11:34:39 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

struct Data
{
    int nbr;
};

// uintptr_t serialize(Data *ptr){};
// Data *deserialize(uintptr_t raw){};

int main()
{
    Data data;
    data.nbr = 100;

    std::cout << "data ->" << data.nbr << std::endl;
    return 0;
}