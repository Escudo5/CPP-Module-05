/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:52:26 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/13 17:39:27 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
    
}

// Form::Form(const Form &copy)
// {
//     this->gradeToExecute = copy.gradeToExecute;
//     this->gradeToSign = copy.gradeToSign;
// }


// Form &Form::operator=(const Form &copy)
// {
//     if (this != &copy)
//     {
//         this->gradeToExecute = copy.gradeToExecute;
//         this->gradeToSign = copy.gradeToSign;
//     }
//     return(*this);
// } 

std::string Bureaucrat::getName()const
{
    return(this->name);
}
int Bureaucrat::getGrade() const
{
    return(this->grade);
}

bool Form::getIsSigned()const
{
    return(this->isSigned);
}

bool Form::beSigned(const Bureaucrat &bureacrat)
{
    if (bureacrat.getGrade() > this->gradeToSign)
        throw (GradeTooLowException());
    this->isSigned = true;
}
int Form::getToExecute()const
{
    return(this->gradeToExecute);   
}

int Form::getToSign()const
{
    return(this->gradeToSign);    
}

void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw GradeTooLowException();
    grade++;
}
void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw GradeTooHighException();
    grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){return "Grade too high";}
const char *Bureaucrat::GradeTooLowException::what() const throw(){return "Grade too low";}
