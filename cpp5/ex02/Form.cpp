/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:20:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/21 14:35:40 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("N/A"), is_signed(0), grade_to_sign(150), grade_to_exe(150)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string name, int grade_to_exe, int grade_to_sign) : name(name), is_signed(0), grade_to_sign(grade_to_sign), grade_to_exe(grade_to_exe)
{
    std::cout << "Form constructor called" << std::endl;
    try
    {
        if (grade_to_exe < 1 || grade_to_sign < 1)
            throw (1);
        else if (grade_to_exe > 150 || grade_to_sign > 150)
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

Form::Form(const Form &f) : name(f.name), is_signed(f.is_signed), grade_to_sign(f.grade_to_sign), grade_to_exe(f.grade_to_exe)
{
    *this = f;
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
}

void	Form::GradeTooLowException()
{
    std::cout << "Grade too low exception called" << std::endl;
}

std::string	Form::getName()
{
	return (this->name);
}

int	Form::getGradeSign() const
{
	return (this->grade_to_sign);
}

int	Form::getGradeExe() const
{
	return (this->grade_to_exe);
}

std::string	Form::isSigned()
{
	if (this->is_signed == 1)
		return ("yes");
	return ("no");
}

std::ostream& operator<<(std::ostream &os, Form &f)
{
	os << f.getName() << ", form grade to sign: " << f.getGradeSign() << " grade to execute: " << f.getGradeExe() << " signed status: " << f.isSigned() << std::endl;
	return os;
}

void	Form::beSigned(Bureaucrat *b)
{
	try
	{
		if (b->getGrade() < this->grade_to_sign)
		{
			this->is_signed = 1;
			b->signForm(this);
		}
		else
			throw(1);
	}
	catch(int f)
	{
		std::cout << "Bureaucrat: " << b->getName() << " lower level than what is required to sign the form: " << this->name << std::endl;
	}
}

void	Form::execute(Bureaucrat &executor) const
{
	try
	{
		if (this->is_signed != 1)
			throw(1);
		else if (this->getGradeExe() < executor.getGrade())
			throw(2);
		else
			std::cout << "Form: " << this->name << " executed" << std::endl;
	}
	catch(int error)
	{
		if (error == 2)
			std::cout << "Executor " << executor.getName() << " grade to low (" << executor.getGrade() << ") to execute Form " << this->name << " (" << this->grade_to_exe << ")" << std::endl;
		else if (error == 1)
			std::cout << "Form: " << this->name << " is not signed" << std::endl;
	}
}