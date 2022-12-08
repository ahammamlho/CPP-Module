/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:12:37 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/08 12:49:46 by lahammam         ###   ########.fr       */
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
    Zombie(std::string namee);
    void announce(void);
    ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
