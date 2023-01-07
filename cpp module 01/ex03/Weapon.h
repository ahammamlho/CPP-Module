/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:12:30 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 14:15:23 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string.h>

class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string str);
    std::string getType();
    void setType(std::string str);
    ~Weapon();
};
#endif
