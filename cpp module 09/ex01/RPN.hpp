/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.HPP                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:59:34 by lahammam          #+#    #+#             */
/*   Updated: 2023/05/07 12:33:35 by lahammam         ###   ########.fr       */
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
    std::stack<char> _opera;

public:
    RPN();
    RPN(std::string arg);

    void programme();
    ~RPN();
};

#endif