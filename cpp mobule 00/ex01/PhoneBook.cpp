/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:54:17 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/14 13:19:23 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::print_info(std::string str)
{
    int i = 0;
    int j = 0;
    int len = str.length();

    if (str.length() > 10)
        len = 10;
    while (j < 10 - len)
    {
        std::cout << " ";
        j++;
    }
    while (str[i] != '\0' && i < 9)
    {
        std::cout << str[i];
        i++;
    }
    if (i == 9)
        std::cout << ".";
};

void PhoneBook::display_contacts(int *index)
{
    int j = 0;
    while (contacts[j].get_firstName().length() != 0)
    {
        std::cout << "          " << j;
        std::cout << "|";
        print_info(contacts[j].get_firstName());
        std::cout << "|";
        print_info(contacts[j].get_lastName());
        std::cout << "|";
        print_info(contacts[j].get_nickName());
        std::cout << std::endl;
        j++;
    }
    *index = j;
};
void PhoneBook::print_contact(int index)
{
    std::cout << contacts[index].get_firstName() << std::endl;
    std::cout << contacts[index].get_lastName() << std::endl;
    std::cout << contacts[index].get_nickName() << std::endl;
    std::cout << contacts[index].get_phoneNumber() << std::endl;
    std::cout << contacts[index].get_darketSecret() << std::endl;
};

void PhoneBook::addContact(int i, Contact contact)
{
    contacts[i] = contact;
};

void PhoneBook::searchContact()
{
    std::string s_index;
    int index;
    int len;
    display_contacts(&len);
    if (len != 0)
    {
        std::cout << std::endl;
        std::cout << "Entry the index for display contact [0 - " << len - 1 << "]: " << std::endl;
        std::cout << "==> ";
        getline(std::cin, s_index);
        if (s_index.length() == 1 && s_index[0] >= '0' && s_index[0] <= '9')
        {
            index = stoi(s_index);
            if (index >= 0 && index < len)
                print_contact(index);
        }
    }
    else
        std::cout << "zero contact" << std::endl;
};