/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:52:18 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/13 17:34:41 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private: 
        const std::string _name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;


    public:
    
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        ~Form();
        
        std::string getName()const;
        int getGrade()const;
        bool getIsSigned()const;
        bool  beSigned(const Bureaucrat &bureaucrat);
        int getToExecute()const;
        int getToSign()const;

        
        
        class GradeTooHighException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        
};

std::ostream &operator<<(std::ostream &os, const Form &obj);


#endif