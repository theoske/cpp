/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:30 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/26 18:45:19 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : Form(src), _target(src._target)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	(void)rhs;
	return *this;
}

int PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return (0);
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream &	operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << i.getName() << ", form grade to sign " << i.getGradeSign() << ", grade to execute " << i.getGradeExec() << ", signed " << i.getSigned() << std::endl;
	return o;
}

