/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:07:45 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/01 17:44:12 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "A cat was born from the dust..." << std::endl;
	this->setType("Cat");
}

Cat::Cat(const Cat &f)
{
	*this = f;
}

Cat	&Cat::operator=(const Cat &f)
{
	(void)	f;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Cat const &i)
{
	(void) i;
	return o;
}

Cat::~Cat()
{
	std::cout << "A cat went back to the dust..." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "AMIAAAAOOOUUUUUU!!!!!" << std::endl;
}
