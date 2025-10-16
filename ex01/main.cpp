/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:47:23 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/16 15:33:50 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    // try {
    //     Bureaucrat pepe("Pepe", 2);
    //     pepe.incrementGrade(); // pasa a 1
    //     std::cout << pepe.getName() << " tiene grado " << pepe.getGrade() << std::endl;

    //     pepe.incrementGrade(); // aquí debería lanzar excepción
    // } 
    // catch (std::exception &e) {
    //     std::cout << "Excepción atrapada: " << e.what() << std::endl;
    // }

    // try {
    //     Bureaucrat juan("Juan", 150);
    //     juan.decrementGrade(); // aquí debería lanzar excepción
    // } 
    // catch (std::exception &e) {
    //     std::cout << "Excepción atrapada: " << e.what() << std::endl;
    // }

    // try 
    // {
    //     Form formulario1("formulario1", 10, 2);
    //     Bureaucrat pepe2("pepe", 7);
    //     std::cout << "pepe tiene grado " << pepe2.getGrade() << " formulario necesita grado "<<  formulario1.getToSign()  << " para ser firmado "<< std::endl;
    // }
    // catch (std::exception &e)
    // {
    //     std::cout << "Excepcion : " << e.what() << std::endl;
    // }
    try 
	{
        Bureaucrat Carl("Carl", 50);
        Form taxForm("TaxForm", 100, 100);

        std::cout << taxForm << std::endl;
        Carl.signForm(taxForm);
        std::cout << taxForm << std::endl;

        Bureaucrat charo("Charo", 120);
        Form secretForm("SecretForm", 100, 100);

        std::cout << secretForm << std::endl;
        charo.signForm(secretForm);
        std::cout << secretForm << std::endl;

    }
	catch (std::exception &e) 
	{
        std::cerr << "Caught error in main: " << e.what() << std::endl;
    }

    return 0;
}
