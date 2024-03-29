/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:26:44 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/02 17:19:05 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
	_forms[0] = new PresidentialPardonForm("default");
	_forms[1] = new RobotomyRequestForm("default");
	_forms[2] = new ShrubberyCreationForm("default");
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(Intern const &f)
{
	if (this != &f)
	{
		for (int i = 0; i < 3; i++)
			this->_forms[i] = f._forms[i];
	}
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form	*form[3] = {new PresidentialPardonForm(target),
						new RobotomyRequestForm(target),
						new ShrubberyCreationForm(target)};
	std::string form_name[3] = {"schruberry creation",
								"robotomy request",
								"presidential pardon"};
								
	for (int i = 0; i < 3; i++)
	{
		if (name == form_name[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (form[i]);
		}
		else
			delete form[i];
	}
	std::cout << "Form name not found" << std::endl;
	return (0);
}

