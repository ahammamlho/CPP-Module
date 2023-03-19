/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:07:20 by lahammam          #+#    #+#             */
/*   Updated: 2023/03/19 12:32:51 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){};

BitcoinExchange::BitcoinExchange(std::string arg)
{
    _arg = arg;
}

double BitcoinExchange::getAmount() const
{
    return _amount;
};

std::string BitcoinExchange::getDate() const
{
    return _date;
};

double BitcoinExchange::getResult() const
{
    return _result;
};

std::string BitcoinExchange::getArg() const
{
    return _arg;
};
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
};

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    (*this)._amount = other.getAmount();
    (*this)._date = other.getDate();
    (*this)._result = other.getResult();
    return (*this);
};

void BitcoinExchange::handleDate(){

};

BitcoinExchange::~BitcoinExchange()
{
}
