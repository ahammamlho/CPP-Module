/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:05:04 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/05 15:42:10 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darketSecret;
public:
    Contact(std::string fName, std::string lName, std::string nName, std::string pNumber, std::string dSecret)
    {
        firstName = fName;
        lastName = lName;
        nickName = nName;
        phoneNumber = pNumber;
        darketSecret = dSecret;
    }
};

#endif