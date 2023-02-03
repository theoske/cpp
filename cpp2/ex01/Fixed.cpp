/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:39:21 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/03 15:49:11 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->nb = 0;
}

Fixed::Fixed(Fixed &tocopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = tocopy;
}

Fixed::Fixed(const int cnb)//converti cnb en virgule fixe this->nb
{
	
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nb = f.nb;
	this->setRawBits(f.getRawBits());
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (0);
}

void	Fixed::setRawBits(int const raw)
{
	this->nb = raw;
}
