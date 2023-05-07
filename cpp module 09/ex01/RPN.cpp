/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:59:28 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/07 22:25:07 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(std::string arg)
{
    _arg = arg;
};

void RPN::parce()
{
    int i = 0;
    std::string tmp;

    while (_arg[i])
    {
        if (_arg[i] <= '9' && _arg[i] >= '0' && _arg[i + 1] <= '9' && _arg[i + 1] >= '0')
            throw RPN::ErrorException();
        if (_arg[i] != ' ')
            tmp += _arg[i];

        i++;
    }
    std::cout << tmp << "\n";
    i = 0;
    while (tmp[i])
    {
        if (tmp[i] > '9' || tmp[i] < '0' || tmp[i] != '*' || tmp[i] != '-' || tmp[i] != '+' || tmp[i] != '/')
            throw RPN::ErrorException();
        while (tmp[i] <= '9' && tmp[i] >= '0')
        {
            _numbers.push(tmp[i] - 48);
            i++;
        }
        while (tmp[i] == '*' || tmp[i] == '-' || tmp[i] == '+' || tmp[i] == '/')
        {
            calcul(tmp[i]);
            i++;
        }
    }
};

void RPN::printResult()
{
    if (_numbers.size() == 1)
        std::cout << "Resu: " << _numbers.top() << std::endl;
    else
        throw RPN::ErrorException();
};

void RPN::calcul(char oper)
{
    int result;
    int nbr1;
    int nbr2;

    if (_numbers.size() < 2)
        throw RPN::ErrorException();
    nbr1 = _numbers.top();
    _numbers.pop();
    nbr2 = _numbers.top();
    _numbers.pop();
    if (oper == '*')
        result = nbr1 * nbr2;
    if (oper == '/')
        result = nbr2 / nbr1;
    if (oper == '+')
        result = nbr1 + nbr2;
    if (oper == '-')
        result = nbr2 - nbr1;
    _numbers.push(result);
};

const char *RPN::ErrorException::what() const throw() { return "Error"; };
RPN::~RPN()
{
}
