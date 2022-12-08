/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:12:37 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/08 14:37:37 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string.h>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    void set_name(std::string namee);
    void announce(void);
    ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);
#endif
