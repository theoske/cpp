/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:36 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/21 13:18:06 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : name("N/A"), is_signed(0), grade_to_sign(72), grade_to_exe(45)
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, std::string target) : name(name), is_signed(0), grade_to_sign(72), grade_to_exe(45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) : name(f.name), is_signed(f.is_signed), grade_to_sign(f.grade_to_sign), grade_to_exe(f.grade_to_exe)
{
    *this = f;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
    (void) f;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}