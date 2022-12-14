/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:21:21 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 12:39:26 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie *newZombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        newZombie[i].set_name(name);
    return (newZombie);
};