/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:03:10 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/16 18:49:59 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{

  try
    {
        Bureaucrat Josele("Josele", 1);
        Bureaucrat Manueh("Manueh", 120);
        Bureaucrat Guille("Guille", 149);

        AForm *presi = new PresidentialPardonForm("home");
        AForm *shrub = new ShrubberyCreationForm("Zombie");
        AForm *robo  = new RobotomyRequestForm("John");

        std::cout << "\n=== JOSELE ===" << std::endl;
        Josele.signForm(*presi);
        Josele.signForm(*shrub);
        Josele.signForm(*robo);

        Josele.executeForm(*presi);
        Josele.executeForm(*shrub);
        Josele.executeForm(*robo);

        std::cout << "\n=== MANUEH ===" << std::endl;
        Manueh.signForm(*presi);
        Manueh.signForm(*shrub);
        Manueh.signForm(*robo);

        Manueh.executeForm(*presi);
        Manueh.executeForm(*shrub);
        Manueh.executeForm(*robo);

        std::cout << "\n=== GUILLE ===" << std::endl;
        Guille.signForm(*presi);
        Guille.signForm(*shrub);
        Guille.signForm(*robo);

        Guille.executeForm(*presi);
        Guille.executeForm(*shrub);
        Guille.executeForm(*robo);

        delete presi;
        delete shrub;
        delete robo;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return(0);
}