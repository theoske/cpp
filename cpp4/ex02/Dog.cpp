/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:39:59 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/03 14:51:37 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "A dog was born from the dust..." << std::endl;
	this->brain = new Brain;
	this->setType("Dog");
}

Dog::Dog(const Dog &f)
{
	*this = f;
}

Dog	&Dog::operator=(const Dog &f)
{
	(void)	f;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "A dog went back to the dust..." << std::endl;
	delete this->brain;
}

std::ostream &operator<<(std::ostream & o, Dog const & i)
{
	(void) i;
	return o;
}

void	Dog::makeSound() const
{
	std::cout << "AWOUAAF!!!!!" << std::endl;
}
