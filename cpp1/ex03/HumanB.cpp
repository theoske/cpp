/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:29:53 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/16 18:05:37 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	this->name = "default";
	Weapon	weapon;
	weapon.setType("bare hands");
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	Weapon	weapon;
	weapon.setType("bare hands");
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanB::~HumanB()
{
}

HumanB	&HumanB::operator=(const HumanB &f)
{
	(void)	f;
	return (*this);
}

HumanB::HumanB(const HumanB &f)
{
	*this = f;
}

void	HumanB::attack()
{
	Weapon	*weapon = this->weapon;
	std::string	type = weapon->getType();
	std::cout << this->name << " attacks with their " << type << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}