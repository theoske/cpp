/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:06:23 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/12 17:35:32 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "An unknown Clap"
	this->name = "unkown";
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::~ClapTrap()
{
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hp <= 0)
		std::cout << "ClapTrap is dead, he cannot attack!" << std::endl;
	else
	{
		std::cout << "ClapTrap attacks " << target << " and deals " << this->ad << " damages!!" << target << std::endl;
		this->ep--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap takes " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp <= 0)
		std::cout << "ClapTrap is dead, he cannot get repaired!" << std::endl;
	else
	{
		std::cout << "ClapTrap heals " << amount << " hp" << std::endl;
		this->ep--;
	}
}