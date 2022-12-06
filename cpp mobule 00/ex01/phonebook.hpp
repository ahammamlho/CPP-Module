/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:50:32 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/06 15:55:30 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
private:
    Contact contacts[8];

    void print_info(std::string str)
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

    void display_contacts(int *index)
    {
        int j = 0;
        while (contacts[j].get_firstName().length() != 0)
        {
            std::cout << "          " << j;
            std::cout << " ";
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

    void print_contact(int index)
    {
        std::cout << contacts[index].get_firstName() << std::endl;
        std::cout << contacts[index].get_lastName() << std::endl;
        std::cout << contacts[index].get_nickName() << std::endl;
        std::cout << contacts[index].get_phoneNumber() << std::endl;
        std::cout << contacts[index].get_darketSecret() << std::endl;
    };

public:
    void addContact(int i, Contact contact)
    {
        contacts[i] = contact;
    };

    void searchContact()
    {
        int index;
        int len;
        display_contacts(&len);
        if (len != 0)
        {
            std::cout << std::endl;
            std::cout << "Entry the index for display contact [0 - " << len - 1 << "]: " << std::endl;
            std::cout << "==> ";
            std::cin >> index;
            if (std::cin.good() && index >= 0 && index < len)
                print_contact(index);
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
        }
        else
            std::cout << "zero contact" << std::endl;
    };
};

#endif