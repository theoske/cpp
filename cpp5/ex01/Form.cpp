/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:20:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/17 15:41:49 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("N/A"), grade_to_exe(150), grade_to_sign(150)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string name, int grade_to_exe, int grade_to_sign) : name(name), grade_to_exe(grade_to_exe), grade_to_sign(grade_to_sign)
{
    std::cout << "Form constructor called" << std::endl;
    try
    {
        if (grade_to_exe < 1 || grade_to_sign < 1)
            throw (1);
        else if (grade_to_exe < 150 || grade_to_sign < 150)
            throw (150);
    }
    catch(int grade)
    {
        if (grade == 1)
            GradeTooLowException();
        else if (grade == 150)
            GradeTooHighException();
    }
}

Form  &Form::operator=(const Form &f)
{
    (void) f;
    return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

void	Form::GradeTooHighException()
{
    std::cout << "Grade too high exception called" << std::endl;
	if (this->grade_to_sign > 150)
    	this->grade_to_sign = 150;
	else
		this->grade_to_exe = 150;
}

void	Form::GradeTooLowException()
{
    std::cout << "Grade too low exception called" << std::endl;
	if (this->grade_to_sign < 1)
    	this->grade_to_sign = 1;
	else
		this->grade_to_exe = 1;
}