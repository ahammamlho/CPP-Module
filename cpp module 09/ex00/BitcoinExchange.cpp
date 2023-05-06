/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:07:20 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/06 20:12:14 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){};

BitcoinExchange::BitcoinExchange(std::string arg)
{
    _arg = arg;
    _date = "";
    _amount = 0.0;
    _result = 0;
    _error = "";
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

void BitcoinExchange::setError(std::string err)
{
    _error = err;
};

std::string BitcoinExchange::getError() const
{
    return _error;
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

// bool BitcoinExchange::is_valid_date() const
// {
//     std::istringstream iss(_date);

//     int year, month, day;
//     char delimiter;

//     if (iss >> year >> delimiter >> month >> delimiter >> day)
//     {
//         std::tm tm_date;
//         tm_date.tm_year = year - 1900;
//         tm_date.tm_mon = month - 1;
//         tm_date.tm_mday = day;

//         std::time_t time_date = std::mktime(&tm_date);
//         std::cout << "---> " << time_date << "\n";
//         if (tm_date.tm_year == year - 1900 && tm_date.tm_mon == month - 1 && tm_date.tm_mday == day)
//         {

//             if (time_date != -1)
//                 return true;
//         }
//     }
//     return false;
// }

std::time_t BitcoinExchange::dateSeconds()
{
    std::istringstream iss(_date);

    int year, month, day;
    char delimiter;

    iss >> year >> delimiter >> month >> delimiter >> day;

    std::tm tm_date;
    tm_date.tm_year = year - 1900;
    tm_date.tm_mon = month - 1;
    tm_date.tm_mday = day;

    std::time_t time_dat = std::mktime(&tm_date);

    return time_dat;
};
bool BitcoinExchange::is_valid_date() const
{
    std::istringstream iss(_date);

    int year, month, day;
    char delimiter;

    if (iss >> year >> delimiter >> month >> delimiter >> day)
    {
        std::tm tm_date;
        tm_date.tm_year = year - 1900;
        tm_date.tm_mon = month - 1;
        tm_date.tm_mday = day;
        tm_date.tm_hour = 0;
        tm_date.tm_min = 0;
        tm_date.tm_sec = 0;

        std::time_t time_date = std::mktime(&tm_date);
        std::cout << "--->" << time_date << "-- " << year << "-" << month << "-" << day << "\n";
        if (tm_date.tm_year == year - 1900 && tm_date.tm_mon == month - 1 && tm_date.tm_mday == day)
        {
            if (time_date != -1)
                return true;
            std::cout << "--->" << time_date << "\n";
        }
    }
    return false;
}
void BitcoinExchange::ft_parce()
{
    std::string amount;
    int pipe = 0;
    for (size_t i = 0; i < _arg.size(); i++)
    {
        if (pipe > 1)
        {
            _error = _arg;
            throw BitcoinExchange::BadFormatException();
        }
        if (_arg[i] == '|')
            pipe++;
        else if (_arg[i] == '\n')
            ;
        else if (pipe == 0)
        {
            _date += _arg[i];
        }
        else
            amount += _arg[i];
    }
    _date.erase(0, _date.find_first_not_of(' '));
    _date.erase(_date.find_last_not_of(' ') + 1);
    amount.erase(0, amount.find_first_not_of(' '));
    amount.erase(amount.find_last_not_of(' ') + 1);

    if (is_valid_date() == false)
    {
        _error = _date;
        throw BitcoinExchange::BadFormatException();
    }
    std::istringstream iss(amount);
    double num;
    if (iss >> num)
    {
        char remaining;
        if (iss >> remaining)
        {
            _error = _arg;
            throw BitcoinExchange::BadFormatException();
        }
        else
            num = std::stod(amount);
        if (num < 0)
        {
            _error = "";
            throw BitcoinExchange::NotPosiNumException();
        }
        else if (num > 1000)
        {
            _error = "";
            throw BitcoinExchange::LargerNumException();
        }
        else
            _amount = num;
    }
    else
    {
        _error = _arg;
        throw BitcoinExchange::BadFormatException();
    }
};

const char *BitcoinExchange::BadFormatException::what() const throw() { return "Error: bad input => "; };
const char *BitcoinExchange::NotPosiNumException::what() const throw() { return "Error: not a positive number. "; };
const char *BitcoinExchange::LargerNumException::what() const throw() { return "Error: too large a number."; };

void BitcoinExchange::handleDate(){

};

BitcoinExchange::~BitcoinExchange()
{
}
