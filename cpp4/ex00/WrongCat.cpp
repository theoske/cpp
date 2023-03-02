/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:06:28 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/02 16:19:51 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "A WrongCat appeared from the dust..." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &f)
{
	*this = f;
}

WrongCat::~WrongCat()
{
	std::cout << "A WrongCat came back to dust..." << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &f)
{
	(void) f;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, WrongCat const &i)
{
	(void) i;
	return (o);
}

void		WrongCat::makeSound(void) const
{
	std::cout << "WrongMIAUOUUUOAIIDSHD!!!!!!!" << std::endl;
}
