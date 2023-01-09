/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/09 17:36:25 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
};

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
};

int main()
{
    Data data;
    data.nbr = 100;

    Data *dataPointer = &data;
    uintptr_t u = serialize(dataPointer);
    std::cout << "u -> " << u << std::endl;

    Data *re = new Data();
    re = deserialize(u);
    std::cout << "nbr -> " << re->nbr << std::endl;

    return 0;
}
