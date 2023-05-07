/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.HPP                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:59:34 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/07 22:20:10 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <iostream>

class RPN
{
private:
    std::string _arg;
    std::stack<int> _numbers;

public:
    RPN();
    RPN(std::string arg);

    void parce();
    void calcul(char oper);
    void printResult();

    class ErrorException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    ~RPN();
};

#endif