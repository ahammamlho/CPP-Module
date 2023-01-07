/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:55 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/06 16:52:05 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

int replace_str(std::string data, std::string file, std::string s1, std::string s2)
{

    size_t found;
    std::string temp;
    int i;

    temp = data;
    found = temp.find(s1);
    i = 0;
    while (found != std::string::npos)
    {
        i = i + found;
        data.erase(i, s1.length());
        data.insert(i, s2);
        i = i + s2.length();
        temp = data.substr(i);
        found = temp.find(s1);
    }
    std::ofstream outFile;
    outFile.open(file + ".replace");
    if (!outFile)
    {
        std::cout << "Unable to open file" << std::endl;
        return (1);
    }
    outFile << data;
    outFile.close();
    return (0);
}

int get_line(std::string file, std::string s1, std::string s2)
{
    std::ifstream inFile;
    std::string data;
    int r;

    inFile.open(file);
    if (!inFile)
    {
        std::cout << "Unable to open file" << std::endl;
        return (1);
    }
    getline(inFile, data, '\0');
    r = replace_str(data, file, s1, s2);
    inFile.close();
    return (r);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Please entre three parameters [filename and two strings]" << std::endl;
        return (1);
    }
    else
        get_line(av[1], av[2], av[3]);
    return 0;
}