/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:50:07 by theo              #+#    #+#             */
/*   Updated: 2023/01/04 16:54:08 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->setType("bare hands");
	return ;
}

Weapon::Weapon(std::string type)
{
	this->setType(type);
	return ;
}

Weapon::~Weapon(void)
{
}

std::string	&Weapon::getType()
{
	std::string	&typeREF = this->type;
	return (typeREF);
}

void	Weapon::setType(std::string newtype)
{
	this->type = newtype;
}
