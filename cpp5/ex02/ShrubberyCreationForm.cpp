/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:42 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/19 17:21:04 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : name("N/A"), is_signed(0), grade_to_sign(145), grade_to_exe(137)
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : name(name), is_signed(0), grade_to_sign(145), grade_to_exe(137)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f) : name(f.name), is_signed(f.is_signed), grade_to_sign(f.grade_to_sign), grade_to_exe(f.grade_to_exe)
{
    *this = f;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
    (void) f;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}