/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:42 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/01 18:23:13 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("N/A")
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &f) : Form(f), _target(f._target)
{
	*this = f;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &f)
{
	this->_target = f._target;
	return *this;
}

int	ShrubberyCreationForm::execute(Bureaucrat &executor)
{
	try
	{
		if (this->isSigned() == false)
			throw 1;
		else if (executor.getGrade() > this->getGradeExe())
			throw 2;
		else
			throw 3;
	}
	catch(int option)
	{
		if (option == 1)
			std::cout << this->getName() <<" Form not signed." << std::endl;
		else if (option == 2)
			GradeTooLowException();
		else if (option == 3)
		{
			std::ofstream ofs(this->_target + "_shrubbery");
			ofs << "0 0" << std::endl;
			ofs << "i i" << std::endl;
		}
	}
	return (0);
}