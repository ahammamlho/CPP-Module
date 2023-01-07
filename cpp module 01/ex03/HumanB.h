/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:25:53 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 14:19:46 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.h"

class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(std::string nm);
    void setWeapon(Weapon &wpn);
    void attack();
    ~HumanB();
};
#endif