/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:02:59 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/16 16:03:08 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute, std::string target) : _name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), target(target)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw (GradeTooHighException());
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw (GradeTooLowException());
    this->isSigned = false;
}

// AForm::AForm(const AForm &copy)
// {
//     this->gradeToExecute = copy.gradeToExecute;
//     this->gradeToSign = copy.gradeToSign;
// }


// AForm &AForm::operator=(const AForm &copy)
// {
//     if (this != &copy)
//     {
//         this->gradeToExecute = copy.gradeToExecute;
//         this->gradeToSign = copy.gradeToSign;
//     }
//     return(*this);
// } 

AForm::~AForm()
{
    
}

std::string AForm::getName()const
{
    return(this->_name);
}
std::string AForm::getTarget()const
{
    return(this->target);
}

bool AForm::getIsSigned()const
{
    return(this->isSigned);
}

void AForm::beSigned(const Bureaucrat &bureacrat)
{
    if (bureacrat.getGrade() > this->gradeToSign)
        throw (GradeTooLowException());
    this->isSigned = true;
}
int AForm::getToExecute()const
{
    return(this->gradeToExecute);   
}

int AForm::getToSign()const
{
    return(this->gradeToSign);    
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
	os << AForm.getName() << ", AForm to sign grade " << AForm.getToSign()
	   << ", AForm grade to Execute " << AForm.getToExecute()
	   << ", AForm is signed " << AForm.getIsSigned() << std::endl;
	return (os);
}


void AForm::execute(Bureaucrat const &executor)const
{
    if (!this->isSigned)
        throw(FormNotSignedException());
    if (executor.getGrade() > this->gradeToExecute)
        throw(GradeTooLowException());
    this->action();
}

const char *AForm::GradeTooHighException::what() const throw(){return "Grade too high";}
const char *AForm::GradeTooLowException::what() const throw(){return "Grade too low";}
const char *AForm::FormNotSignedException::what() const throw(){return "Form not signed";}
