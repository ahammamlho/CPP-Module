/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/03/19 15:11:34 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool is_valid_date(const std::string &date_str)
{
    std::istringstream iss(date_str);

    int year, month, day;
    char delimiter;

    if (iss >> year >> delimiter >> month >> delimiter >> day)
    {
        std::tm tm_date;
        tm_date.tm_year = year - 1900;
        tm_date.tm_mon = month - 1;
        tm_date.tm_mday = day;

        std::time_t time_date = std::mktime(&tm_date);
        if (tm_date.tm_mon == month - 1 && tm_date.tm_mday == day)
        {
            if (time_date != -1)
                return true;
        }
    }
    return false;
}

std::string ft_parce(std::string temp, int k)
{
    std::string date;
    std::string amount;
    int pipe = 0;

    for (size_t i = 0; i < temp.size(); i++)
    {
        if (pipe > 1)
        {
            std::cout << "Error: bad input => " << temp << std::endl;
            // throw 0;
        }
        if (pipe == 0)
        {
            if (temp[i] == '|')
                pipe++;
            else
                date += temp[i];
        }
        else
            amount += temp[i];
    }
    date.erase(0, date.find_first_not_of(' '));
    date.erase(date.find_last_not_of(' ') + 1);
    amount.erase(0, amount.find_first_not_of(' '));
    amount.erase(amount.find_last_not_of(' ') + 1);
    if (k == 0)
        return date;
    return (amount);
};

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "=> Please enter: ./btc fileName\n";
    else
    {
        try
        {
            std::string date;
            std::string amount;

            date = ft_parce(av[1], 0);
            amount = ft_parce(av[1], 0);
            std::cout << "date-> |" << date;
            std::cout << "|\namount->|" << amount << "|\n";
            // BitcoinExchange bitcoin(av[1]);
            // std::string date_str = "2023-02-28";
            // if (is_valid_date(date_str))
            // {
            //     std::cout << "The date " << date_str << " is valid." << std::endl;
            // }
            // else
            // {
            //     std::cout << "The date " << date_str << " is not valid." << std::endl;
            // }
        }
        catch (int i)
        {
            ;
        }
    }
    return 0;
}
