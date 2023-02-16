/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:49:54 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/16 17:23:23 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "A FragTrap named " << name << " appeared!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f) : ClapTrap(f)
{
	*this = f;
}

FragTrap::~FragTrap()
{
	std::cout << "A FragTrap named " << this->name << " vanished..." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &f)
{
	(void) f;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->name << ", a needy fragtrap is asking high fives from the homies..." << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap: " << this->name << " attacks " << target << std::endl;
}