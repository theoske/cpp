/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:12:08 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/26 18:41:32 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Parametric constructor called" << std::endl;
	if (grade < 1)
		Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void		Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void		Bureaucrat::signForm(Form &form)
{
	try
	{
		if (form.beSigned(*this) == 0)
			std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		if (form.execute(*this) == 0)
			std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::GradeTooHighException() const
{
	std::cout << this->_name << ": Grade too high exception called" << std::endl;
}

void Bureaucrat::GradeTooLowException() const
{
	std::cout << this->_name << ": Grade too low exception called" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}
