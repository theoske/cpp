/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:12:08 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/28 18:08:32 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    try
    {
        this->_grade = grade;
        if (grade < 1)
            throw (1);
        else if (grade > 150)
            throw (150);
    }
    catch(int grade)
    {
        if (grade == 1)
            GradeTooHighException();
        else if (grade == 150)
            GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &f) : _name(f._name), _grade(f._grade)
{
	*this = f;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &f)
{
	this->_grade = f._grade;
	this->_name = f._name;
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

void	Bureaucrat::operator++()
{
    try
    {
        this->_grade--;
        if (this->_grade < 1)
            throw (1);
        else if (this->_grade > 150)
            throw (150);
    }
    catch(int grade)
    {
        if (grade == 1)
            GradeTooHighException();
        else if (grade == 150)
            GradeTooLowException();
    }
}

void	Bureaucrat::operator--()
{
    try
    {
        this->_grade++;
        if (this->_grade < 1)
            throw (1);
        else if (this->_grade > 150)
            throw (150);
    }
    catch(int grade)
    {
        if (grade == 1)
            GradeTooHighException();
        else if (grade == 150)
            GradeTooLowException();
    }
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
