/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:26:44 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/27 16:14:49 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <map>

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

Intern	&Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 3; i++)
			this->_forms[i] = rhs._forms[i];
	}
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	static const std::map<std::string, std::function<Form*(std::string)> > formFactories = {
        {"ShrubberyCreationForm", [](std::string target){ return new ShrubberyCreationForm(target); }},
        {"RobotomyRequestForm", [](std::string target){ return new RobotomyRequestForm(target); }},
        {"PresidentialPardonForm", [](std::string target){ return new PresidentialPardonForm(target); }},
    };
	auto it = formFactories.find(name);
    if (it != formFactories.end())
	{
		std::cout << "Intern creates " << name << std::endl;
        return (it->second(target));
    }
	std::cout << "Form name not found" << std::endl;
	return (0);
}
