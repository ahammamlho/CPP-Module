/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/06 12:42:09 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "=> Please enter: ./btc fileName\n";
    else
    {
        std::ifstream file(av[1]);
        if (!file.is_open())
        {
            std::cout << "Error opening file.\n";
            return 1;
        }
        std::string line;
        std::getline(file, line);
        while (std::getline(file, line))
        {
            BitcoinExchange bitcoin(line);
            try
            {
                bitcoin.ft_parce();
                // std::time_t time_date = bitcoin.dateSeconds();
                std::cout << "- " << bitcoin.getDate() << std::endl;
            }
            catch (std::exception &e)
            {
                // std::cerr << e.what() << bitcoin.getError() << '\n';
            }
        }
        file.close();
    }
    return 0;
}
