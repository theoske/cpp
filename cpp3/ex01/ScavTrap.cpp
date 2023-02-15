/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:41:23 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/15 17:16:49 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "A ScavTrap named " << name << " has awakened from the shadows..." << std::endl;
	this->name = name;
}

ScavTrap::ScavTrap(const ScavTrap &f)
{
	
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &f)
{
	
}

ScavTrap::~ScavTrap(void)
{
	
}
