/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:00:04 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/16 18:05:14 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
	this->name = "default";
	this->weapon->setType("bare hands");
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
	return ;
}

HumanA::~HumanA(void)
{
}

HumanA	&HumanA::operator=(const HumanA &f)
{
	(void)	f;
	return (*this);
}

HumanA::HumanA(const HumanA &f)
{
	*this = f;
}

void	HumanA::attack(void)
{
	std::string	type;

	type = this->weapon->getType();
	std::cout << this->name << " attacks with their " << type << std::endl;
	return ;
}
