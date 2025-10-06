/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:42:25 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/06 12:46:42 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <exception>

class Bureaucrat
{
  
    public:
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw(){return "Grade too high";};
        };
        
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw(){return"Grade too low";};
        };

        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();

        
        const std::string name;
        int grade;


        
        std::string getName()const;
        int getGrade()const;
        
        void incrementGrade();
        void decrementGrade();


    private:
    

};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);


#endif