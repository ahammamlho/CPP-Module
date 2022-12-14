/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 11:28:53 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int prompt(std::string str)
{
    std::cout << str << std::endl;
    std::cout << "==> ";
    return (1);
}

Contact fill_data()
{
    Contact contact;
    std::string fName, lName, nName, pNumber, dSecret;
    while (fName.length() == 0 && prompt("Enter first name"))
        getline(std::cin, fName);
    while (lName.length() == 0 && prompt("Enter last name"))
        getline(std::cin, lName);
    while (nName.length() == 0 && prompt("Enter nickname"))
        getline(std::cin, nName);
    while (pNumber.length() == 0 && prompt("Enter phone number"))
        getline(std::cin, pNumber);
    while (dSecret.length() == 0 && prompt("Enter darkest secre"))
        getline(std::cin, dSecret);
    contact.fill_contact(fName, lName, nName, pNumber, dSecret);
    return (contact);
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        int i = 0;
        PhoneBook phonebook;
        Contact contact;
        std::string cmd;
        while (1)
        {
            prompt("Enter one of three commands [ADD, SEARCH and EXIT]");
            getline(std::cin, cmd);
            if (cmd.compare("ADD") == 0)
            {
                contact = fill_data();
                phonebook.addContact(i, contact);
                if (i == 7)
                    i = -1;
                i++;
            }
            else if (cmd.compare("SEARCH") == 0)
                phonebook.searchContact();
            else if (cmd.compare("EXIT") == 0)
                break;
            else
                std::cout << "Please ";
        }
    }
    (void)argv;
}