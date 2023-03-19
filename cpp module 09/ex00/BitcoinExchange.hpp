/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:07:17 by lahammam          #+#    #+#             */
/*   Updated: 2023/03/19 12:27:05 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string.h>
#include <iostream>
#include <sstream>
#include <chrono>

class BitcoinExchange
{
private:
    std::string _arg;

    double _amount;
    std::string _date;

    double _result;

public:
    BitcoinExchange();
    BitcoinExchange(std::string arg);
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);

    double getResult() const;
    double getAmount() const;
    std::string getDate() const;
    std::string getArg() const;

    void handleDate();

    ~BitcoinExchange();
};

#endif