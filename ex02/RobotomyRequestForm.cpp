/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:11:42 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/16 18:29:44 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45, target)
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}


void RobotomyRequestForm::execute(Bureaucrat const &executor)const
{
    AForm::execute(executor);
    this->action();
}

void RobotomyRequestForm::action() const
{
    srand(time(0));

    if (rand() % 2 == 0) 
        std::cout << this->getTarget() << " has been robotomized" << std::endl;
    else 
        std::cout << "Robotomy failed" << std::endl;
}