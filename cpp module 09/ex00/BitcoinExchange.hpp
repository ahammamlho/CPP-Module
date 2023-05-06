/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 11:07:17 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/06 11:40:49 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string.h>
#include <iostream>
#include <sstream>
#include <chrono>
#include <map>
#include <fstream>

class BitcoinExchange
{
private:
    std::string _arg;

    double _amount;
    std::string _date;

    double _result;

    std::string _error;

public:
    BitcoinExchange();
    BitcoinExchange(std::string arg);
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);

    double getResult() const;
    double getAmount() const;
    std::string getDate() const;
    std::string getArg() const;
    std::string getError() const;
    void setError(std::string err);
    void ft_parce();
    bool is_valid_date(const std::string date_str) const;

    void handleDate();
    std::time_t dateSeconds();
    class BadFormatException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class NotPosiNumException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class LargerNumException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    ~BitcoinExchange();
};

#endif