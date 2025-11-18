/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:06:50 by smarquez          #+#    #+#             */
/*   Updated: 2025/11/18 15:34:17 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5, target)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

// PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
// {
//     this->target = copy.target;
// }

// PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
// {
//     if (this != &copy)
//     {
//         target = copy.target
//     }
//         return *this;
// }

void PresidentialPardonForm::execute(Bureaucrat const &executor)const
{
    AForm::execute(executor);
    this->action();
}

void PresidentialPardonForm::action() const
{
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}