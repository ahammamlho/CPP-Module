/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:56:25 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/08 12:13:33 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    firstName = "";
    lastName = "";
    nickName = "";
    phoneNumber = "";
    darketSecret = "";
};

void Contact::fill_contact(std::string fName, std::string lName, std::string nName, std::string pNumber, std::string dSecret)
{
    firstName = fName;
    lastName = lName;
    nickName = nName;
    phoneNumber = pNumber;
    darketSecret = dSecret;
};
std::string Contact::get_firstName()
{
    return firstName;
};
std::string Contact::get_lastName()
{
    return lastName;
};
std::string Contact::get_nickName()
{
    return nickName;
};
std::string Contact::get_phoneNumber()
{
    return phoneNumber;
};
std::string Contact::get_darketSecret()
{
    return darketSecret;
};