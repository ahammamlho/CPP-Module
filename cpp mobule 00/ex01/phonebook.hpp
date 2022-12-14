/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:50:32 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 11:28:38 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];

    void print_info(std::string str);
    void display_contacts(int *index);
    void print_contact(int index);

public:
    void addContact(int i, Contact contact);
    void searchContact();
};

#endif
