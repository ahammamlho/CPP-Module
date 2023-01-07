/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:37:45 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/22 17:09:41 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain class: Default constructor called" << std::endl;
};

Brain::Brain(const Brain &old)
{
    std::cout << "Brain class: Copy constructor called" << std::endl;
    *this = old;
};

Brain &Brain::operator=(const Brain &old)
{
    std::cout << "Brain class: Copy assignment operator called" << std::endl;
    if (this != &old)
    {
        for (size_t i = 0; i < 100; i++)
        {
            ideas[i] = (old.ideas)[i];
        }
    }
    return (*this);
};

Brain::~Brain()
{
    std::cout << "Brain class: Destructor called" << std::endl;
};