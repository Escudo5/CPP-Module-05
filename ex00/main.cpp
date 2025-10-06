/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:47:23 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/06 13:04:56 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Pepe = Bureaucrat("Pepe", 2);
    Bureaucrat Juan = Bureaucrat("Juan", 3);
    
    Pepe.incrementGrade();
    // Pepe.getGrade();
    std::cout << Pepe.getName() << Pepe.getGrade() << std::endl;
    // Pepe.getName();
    Juan.decrementGrade();
    // Juan.getGrade();

    Pepe.incrementGrade();
    // Pepe.getGrade();
    Pepe.incrementGrade();
    // Pepe.getGrade();
    
}