/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:29:53 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/01/05 17:20:58 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	this->name = "default";
	Weapon	weapon;
	weapon.setType("bare hands");
	this->weapon = &weapon;
};

HumanB::HumanB(std::string name)
{
	this->name = name;
	Weapon	weapon;
	weapon.setType("bare hands");
	this->weapon = &weapon;
};

HumanB::HumanB(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
};

HumanB::~HumanB()
{
};

void	HumanB::attack()
{
	Weapon	*weapon = this->weapon;
	std::string	type = weapon->getType();
	std::cout << this->name << " attacks with their " << type << std::endl;
	return ;
};

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}