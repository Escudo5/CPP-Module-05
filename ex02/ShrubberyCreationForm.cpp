/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:13:08 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/16 18:29:54 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137, target)
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)const
{
    AForm::execute(executor);
    this->action();
}

void ShrubberyCreationForm::action()const
{
    std::ofstream out((getTarget() + "_shrubbery").c_str());
    if (!out)
    {
        std::cout << "failed to create file" << std::endl;
        return;
    }
    out << "         .        .   .        " << std::endl;
    out << "    .        .         .   .       " << std::endl;
    out << "          oxoxoo    ooxoo" << std::endl;
    out << "        ooxoxo oo  oxoxooo" << std::endl;
    out << "       oooo xxoxoo ooo ooox" << std::endl;
    out << "       oxo o oxoxo  xoxxoxo" << std::endl;
    out << "         oxo xooxoooo o ooo" << std::endl;
    out << "           ooo\\oo\\  /o/o" << std::endl;
    out << "               \\  \\/ /" << std::endl;
    out << "                |   /" << std::endl;
    out << "                |  |" << std::endl;
    out << "                |  |" << std::endl;
    out << "               _|  |_" << std::endl;
    out << "             __/|  |\\__" << std::endl;
    out << "           _/___|__|___\\_" << std::endl;
}

