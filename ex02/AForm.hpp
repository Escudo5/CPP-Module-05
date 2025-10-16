/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:41:03 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/16 15:49:43 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private: 
        const std::string _name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;


    public:
    
        AForm(std::string name, int gradeToSign, int gradeToExecute);
        // AForm(const AForm &copy);
        // AForm &operator=(const AForm &copy);
        ~AForm();
        
        std::string getName()const;
        bool getIsSigned()const;
        void  beSigned(const Bureaucrat &bureaucrat);
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

        void execute(Bureaucrat const &executor)const;
        virtual void action() const = 0;
        
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);

