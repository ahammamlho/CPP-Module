/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:50:32 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/05 15:38:26 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
private:
    static int i = 0;
    Contact contacts[8];

public:
    void addContact(Contact contact)
    {
        contacts[i] = contact;
        std::cout << "addContact" << std::endl;
        i++;
    };
    void searchContact()
    {
        std::cout << "searchContact" << std::endl;
    };
};

#endif