/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammam <ahammam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:46:46 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/07 09:08:06 by ahammam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), target("null"){};

ShrubberyCreationForm::ShrubberyCreationForm(std::string targt)
    : AForm("ShrubberyCreationForm", 145, 137), target(targt){};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old)
    : AForm(old), target(old.target){};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old)
{
    (void)old;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (get_isSigned() == false)
        throw AForm::FormIsNotSigned();
    else if (executor.getGrade() < get_gradeRequiredtoExecute())
        throw AForm::GradeTooLowException();

    std::ofstream outFile;
    outFile.open(target + "_shrubbery");
    if (!outFile)
    {
        std::cout << "Unable to open file" << std::endl;
        exit(0);
    }
    outFile << "               .                  \n";
    outFile << "              --                  \n";
    outFile << "             /   \\               \n";
    outFile << "            /     \\              \n";
    outFile << "           /       \\             \n";
    outFile << "          /         \\            \n";
    outFile << "         /           \\           \n";
    outFile << "        /             \\          \n";
    outFile << "       /               \\         \n";
    outFile << "      /                 \\        \n";
    outFile << "      -------------------         \n";
    outFile << "           |       |              \n";
    outFile << "           |       |              \n";
    outFile << "           |       |              \n";
    outFile << "           |       |              \n";
    outFile.close();
};

ShrubberyCreationForm::~ShrubberyCreationForm(){};