/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:30 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/01 18:03:15 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("N/A")
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &f) : _target(f._target)
{
	*this = f;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &f)
{
	this->_target = f._target;
	return (*this);
}

int PresidentialPardonForm::execute(Bureaucrat &executor)
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
			std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	return (0);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}
