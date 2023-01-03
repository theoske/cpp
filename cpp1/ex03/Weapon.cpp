/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:50:07 by theo              #+#    #+#             */
/*   Updated: 2023/01/03 17:04:34 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
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
