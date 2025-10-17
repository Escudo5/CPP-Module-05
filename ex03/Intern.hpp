/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:00:14 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/17 13:12:27 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
    public:

        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        ~Intern();
        
        AForm *makeForm(std::string const &formName, std::string const &target);


};


#endif