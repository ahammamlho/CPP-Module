/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:26:51 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/20 13:11:25 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string nm);

    FragTrap(const FragTrap &old);
    FragTrap &operator=(const FragTrap &old);

    void highFivesGuy(void);

    ~FragTrap();
};

#endif