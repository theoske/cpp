/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:30 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/21 13:21:06 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : name("N/A"), is_signed(0), grade_to_sign(25), grade_to_exe(5)
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name, std::string target) : name(name), is_signed(0), grade_to_sign(25), grade_to_exe(5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : name(f.name), is_signed(f.is_signed), grade_to_sign(f.grade_to_sign), grade_to_exe(f.grade_to_exe)
{
    *this = f;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
    (void) f;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}
