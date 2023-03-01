/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:48:05 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/01 17:44:49 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An animal is born from the dust..." << std::endl;
}

Animal::Animal(const Animal &f)
{
	*this = f;
}

Animal	&Animal::operator=(const Animal &f)
{
	(void)	f;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal went back to the dust..." << std::endl;
}

void	Animal::setType(std::string type)
{
	this->type = type;
}

std::string	Animal::getType() const
{
	return(this->type);
}

void	Animal::makeSound() const
{
	std::cout << "*weird undefinable noise*" << std::endl;
}