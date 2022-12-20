/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:49:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 13:05:35 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
private:
    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string nm);

    ClapTrap(const ClapTrap &old_claptrap);
    ClapTrap &operator=(const ClapTrap &old_claptrap);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string get_name() const;
    unsigned int get_hitPoints() const;
    unsigned int get_energyPoints() const;
    unsigned int get_attackDamage() const;

    void set_name(std::string nm);
    void set_hitPoints(unsigned int hit);
    void set_energyPoints(unsigned int energy);
    void set_attackDamage(unsigned int attack);

    ~ClapTrap();
};

#endif