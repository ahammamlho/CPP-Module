/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:29:41 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 15:34:34 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap : public FragTrap, public ScavTrap
{
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(std::string nm);

    DiamondTrap(const DiamondTrap &old);
    DiamondTrap &operator=(const DiamondTrap &old);

    using ScavTrap::attack;

    ~DiamondTrap();
    std::string get_name_diam() const;
    void set_name_diam(std::string name);
    void whoAmI();
};

#endif