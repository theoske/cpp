/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:59:44 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/02 16:06:24 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "A WrongAnimal was born from the dust..." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &f)
{
	*this = f;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &f)
{
	(void) f;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "A WrongAnimal came back to the dust..." << std::endl;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "*Wrong undefinable noise*" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
