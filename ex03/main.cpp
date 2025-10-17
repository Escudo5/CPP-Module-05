/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:03:10 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/17 13:16:23 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"


int main()
{
	srand(time(NULL));
	Intern someRandomIntern;
	Bureaucrat boss("Jefe", 1);

	std::cout << "\n--- Caso válido: Shrubbery ---" << std::endl;
	AForm *form1 = someRandomIntern.makeForm("shrubbery creation", "garden");
	if (form1)
	{
		boss.signForm(*form1);
		boss.executeForm(*form1);
		delete form1;
	}

	std::cout << "\n--- Caso válido: Robotomy ---" << std::endl;
	AForm *form2 = someRandomIntern.makeForm("robotomy request", "Bender");
	if (form2)
	{
		boss.signForm(*form2);
		boss.executeForm(*form2);
		delete form2;
	}

	std::cout << "\n--- Caso válido: Presidential ---" << std::endl;
	AForm *form3 = someRandomIntern.makeForm("presidential pardon", "Pepito");
	if (form3)
	{
		boss.signForm(*form3);
		boss.executeForm(*form3);
		delete form3;
	}

	std::cout << "\n--- Caso inválido: Form inexistente ---" << std::endl;
	AForm *form4 = someRandomIntern.makeForm("invalid form", "Nobody");
	if (form4)
		delete form4;

	return 0;
}