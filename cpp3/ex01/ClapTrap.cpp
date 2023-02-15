/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:06:23 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/15 16:52:12 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "An unknown ClapTrap appeared!!!" << std::endl;
	this->name = "unkown";
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	std::cout << "A ClapTrap named " << this->name << " appeared!!"<< std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &f)
{
	(void) f;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &f)
{
	*this = f;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " desappeared!!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hp <= 0)
		std::cout << this->name << " is dead, he cannot attack!" << std::endl;
	else if (this->ep <= 0)
		std::cout << this->name << " is tired, he cannot attack!" << std::endl;
	else
	{
		std::cout << this->name << " attacks " << target << " and deals " << this->ad << " damages!!" << std::endl;
		this->ep--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " takes " << amount << " damage" << std::endl;
	this->hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp <= 0)
		std::cout << this->name << " is dead, he cannot get repaired!" << std::endl;
	else if (this->ep <= 0)
		std::cout << this->name << " is tired, he cannot get repaired!" << std::endl;
	else
	{
		std::cout << this->name << " heals " << amount << " hp" << std::endl;
		this->ep--;
	}
}

int	ClapTrap::gethp()
{
	return (this->hp);
}

int	ClapTrap::getep()
{
	return (this->ep);
}

int	ClapTrap::getad()
{
	return (this->ad);
}
