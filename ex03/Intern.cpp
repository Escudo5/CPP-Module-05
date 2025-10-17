/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:00:20 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/17 13:12:09 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}
Intern::Intern(const Intern &copy)
{
    (void) copy;
}

Intern::~Intern()
{
    
}

Intern &Intern::operator=(const Intern &copy)
{
    (void)copy;
    return(*this);
}

AForm *Intern::makeForm(std::string  const &formName, std::string const &target)
{
    std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    
    for (int i = 0; i < 3; i++)
    {
        if (formName == forms[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
        }
        switch(i)
        {
            case 0:
                return new ShrubberyCreationForm(target);
                break;
            case 1:
                return new RobotomyRequestForm(target);
                break;
            case 2:
                return new PresidentialPardonForm(target);
                break;
        }
    }
    std::cerr << "Intern: invalid form " << std::endl;
    return(NULL);
}