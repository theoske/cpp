/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:20:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/26 18:40:58 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "Parametric constructor called" << std::endl;
	if (gradeSign < 1 || gradeExec < 1)
		Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		Form::GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
	*this = src;
}

Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
}

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int			Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

int		Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeSign)
	{
		Form::GradeTooLowException();
		return (-1);
	}
	else
		this->_signed = true;
	return (0);
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << ", form grade " << rhs.getGradeSign() << ", grade exec " << rhs.getGradeExec() << ", signed " << rhs.getSigned();
	return (o);
}

void Form::GradeTooHighException() const
{
	std::cout << this->_name << ": Grade too high exception called" << std::endl;
}

void Form::GradeTooLowException() const
{
	std::cout << this->_name << ": Grade too low exception called" << std::endl;
}

int		Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_gradeExec)
		Form::GradeTooLowException();
	else if (!this->_signed)
	{
		Form::FormNotSignedException();
		return (-1);
	}
	return (0);
}

void	Form::FormNotSignedException() const
{
	std::cout << "Form: " << this->_name << " not signed" << std::endl;
}
