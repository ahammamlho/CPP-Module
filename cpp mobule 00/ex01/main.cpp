/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2022/12/05 15:44:03 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void prompt()
{
    std::cout << "Enter one of three commands [ADD, SEARCH and EXIT]" << std::endl;
    std::cout << "==> ";
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        PhoneBook phonebook;
        std::string cmd;
        while (1)
        {
            prompt();
            getline(std::cin, cmd);
            if (cmd.compare("ADD") == 0)
            {
                std::string fName, lName, nName, pNumber, dSecret;
            }
            else if (cmd.compare("SEARCH") == 0)
                phonebook.searchContact();
            else if (cmd.compare("EXIT") == 0)
                break;
            else
                std::cout << "Please ";
        }
    }
}