/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:42 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/26 18:44:37 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : Form(src), _target(src._target)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	(void)rhs;
	return *this;
}

int	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
	{
		Form::FormNotSignedException();
		return (-1);
	}
	if (executor.getGrade() > this->getGradeExec())
	{
		Form::GradeTooLowException();
		return (-1);
	}
	std::ofstream ofs(this->_target + "_shrubbery");
	ofs << "0 0" << std::endl;
	ofs << "i i" << std::endl;
	return (0);
}