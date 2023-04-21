/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:12:08 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/21 15:13:41 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */) : name("N/A"), grade(150)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    try
    {
        this->grade = grade;
        if (grade < 1)
            throw (1);
        else if (grade > 150)
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

Bureaucrat::Bureaucrat(const Bureaucrat &f)
{
    *this = f;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &f)
{
    (void) f;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

void	Bureaucrat::GradeTooHighException()
{
    std::cout << "Grade too high exception called" << std::endl;
    this->grade = 150;
}

void	Bureaucrat::GradeTooLowException()
{
    std::cout << "Grade too low exception called" << std::endl;
    this->grade = 1;
}

const std::string	Bureaucrat::getName()
{
    return (this->name);
}
int		Bureaucrat::getGrade()
{
    return (this->grade);
}

void	Bureaucrat::signForm(Form *f)
{
	std::cout << "Bureaucrat: " << this->name << " signed form: " << f->getName() << std::endl;
}

void	Bureaucrat::operator++()
{
    try
    {
        this->grade++;
        if (this->grade < 1)
            throw (1);
        else if (this->grade > 150)
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

void	Bureaucrat::operator--()
{
    try
    {
        this->grade--;
        if (this->grade < 1)
            throw (1);
        else if (this->grade > 150)
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

std::ostream& operator<<(std::ostream &os, Bureaucrat &f)
{
	os << f.getName() << ", bureaucrat grade " << f.getGrade() << std::endl;
	return os;
}

void	Bureaucrat::executeForm(Form &form)
{
	if (form.execute(*this) == 0)
		std::cout << "Bureaucrat: " << this->name << " executed " << form.getName() << std::endl;
	else
		std::cout << "Error: Bureaucrat: " << this->name << " cannot execute " << form.getName() << std::endl;
}