/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:19:20 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 14:19:44 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.h"

class HumanA
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanA(std::string nm, Weapon &wpn);
    void attack();
    ~HumanA();
};

#endif
