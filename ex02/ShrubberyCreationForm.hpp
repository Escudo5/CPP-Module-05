/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:59:59 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/16 16:14:10 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
    
    public:
        ShrubberyCreationForm(const std::string &target);
        ~ShrubberyCreationForm();

    
        virtual void execute(Bureaucrat const &executor)const = 0;
        void action()const;
};




#endif