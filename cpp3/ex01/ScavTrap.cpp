/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:41:23 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/16 15:55:46 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "A ScavTrap named " << name << " has awakened from the shadows..." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f) : ClapTrap(f)
{
	(void) f;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &f)
{
	(void) f;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap :" << this->name << " gate guarding mode activated" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap :" << this->name << " attacks " << target << " and deals " << this->ad << " damages" << std::endl;
}
