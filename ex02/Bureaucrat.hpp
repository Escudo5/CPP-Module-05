/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:42:25 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/16 15:45:05 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <exception>

#include "Form.hpp"

class AForm;
class Bureaucrat
{
  
    public:


        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();

        
        //Exceptions

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

        
        
        std::string getName()const;
        int getGrade()const;
        
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);
        void executeForm(AForm const &form)const;
        
    private:
        const std::string name;
        int grade;
        

};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);


#endif