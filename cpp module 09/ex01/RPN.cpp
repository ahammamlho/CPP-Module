/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:59:28 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/07 13:35:23 by lahammam         ###   ########.fr       */
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
        if (_arg[i] != ' ')
            tmp += _arg[i];
        i++;
    }
    std::cout << tmp << "\n";
    i = 0;
    if (tmp[i] <= '9' && tmp[i] >= '0')
        _numbers.push(tmp[i] - 48);
    else
        std::cout << "invalid format .." << i << "\n";
    i++;
    while (tmp[i])
    {
        if (tmp[i] <= '9' && tmp[i] >= '0')
            _numbers.push(tmp[i] - 48);
        else
            std::cout << "invalid format" << i << "\n";
        i++;
        if (tmp[i] == '*' || tmp[i] == '-' || tmp[i] == '+' || tmp[i] == '/')
        {
            calcul(tmp[i]);
        }
        else
            std::cout << "invalid format ... " << i << "\n";
        i++;
    }
    std::cout << "The top element of the stack is: " << _numbers.top() << std::endl;
};

void RPN::calcul(char oper)
{
    int result;
    int nbr1;

    nbr1 = _numbers.top();
    _numbers.pop();
    if (oper == '*')
        result = nbr1 * _numbers.top();
    if (oper == '/')
        result = _numbers.top() / nbr1;
    if (oper == '+')
        result = nbr1 + _numbers.top();
    if (oper == '-')
        result = _numbers.top() - nbr1;
    _numbers.pop();
    _numbers.push(result);
};

RPN::~RPN()
{
}
