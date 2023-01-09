/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:17:26 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/09 12:59:15 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASS_HPP
#define BASS_HPP

class Base
{
private:
public:
    Base();
    virtual ~Base();

    Base *generate(void);
    void identify(Base *p);
};

#endif