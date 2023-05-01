/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:36 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/01 18:17:06 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("N/A")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &f) : Form(f), _target(f._target)
{
	*this = f;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &f)
{
	this->_target = f._target;
	return *this;
}

int	RobotomyRequestForm::execute(Bureaucrat &executor)
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
			if (rand() % 2 == 0)
				std::cout << this->_target << " has been robotomized successfully." << std::endl;
			else
				std::cout << this->_target << " robotomization failed." << std::endl;
		}
	}
	return (0);
}