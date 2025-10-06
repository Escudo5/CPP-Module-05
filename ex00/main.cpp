/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:47:23 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/06 14:57:45 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat pepe("Pepe", 2);
        pepe.incrementGrade(); // pasa a 1
        std::cout << pepe.getName() << " tiene grado " << pepe.getGrade() << std::endl;

        pepe.incrementGrade(); // aquí debería lanzar excepción
    } 
    catch (std::exception &e) {
        std::cout << "Excepción atrapada: " << e.what() << std::endl;
    }

    try {
        Bureaucrat juan("Juan", 150);
        juan.decrementGrade(); // aquí debería lanzar excepción
    } 
    catch (std::exception &e) {
        std::cout << "Excepción atrapada: " << e.what() << std::endl;
    }

    return 0;
}
