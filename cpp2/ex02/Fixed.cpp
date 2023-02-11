/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:39:21 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/11 16:51:36 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->nb = 0;
}

Fixed::Fixed(const Fixed &tocopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = tocopy;
}

Fixed::Fixed(const int cnb)//converti cnb en virgule fixe this->nb
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(cnb << 8);
}

Fixed::Fixed(const float cfnb)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf((cfnb * 256)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(f.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator+(const Fixed &f)
{
	this->nb = this->nb + f.nb;
	return (*this);
}

Fixed	&Fixed::operator-(const Fixed &f)
{
	this->nb = this->nb - f.nb;
	return (*this);
}

Fixed	&Fixed::operator*(const Fixed &f)
{
	this->nb = this->nb * f.nb;
	return (*this);
}

Fixed	&Fixed::operator/(const Fixed &f)
{
	this->nb = this->nb / f.nb;
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	this->nb++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->nb--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;

	temp.operator++();
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	temp.operator--();
	return (temp);
}

bool	Fixed::operator>(const Fixed &f)
{
	if (f.nb > this->nb)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &f)
{
	if (f.nb < this->nb)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &f)
{
	if (f.nb >= this->nb)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &f)
{
	if (f.nb <= this->nb)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &f)
{
	if (f.nb == this->nb)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &f)
{
	if (f.nb != this->nb)
		return (true);
	return (false);
}

Fixed	Fixed::min(Fixed &f, Fixed &s)
{
	if (f.nb > s.nb)
		return (s);
	return (f);
}

Fixed	Fixed::max(Fixed &f, Fixed &s)
{
	if (f.nb < s.nb)
		return (s);
	return (f);
}

Fixed	Fixed::min(const Fixed &f, const Fixed &s)
{
	if (f.nb > s.nb)
		return (s);
	return (f);
}

Fixed	Fixed::max(const Fixed &f, const Fixed &s)
{
	if (f.nb < s.nb)
		return (s);
	return (f);
}

std::ostream& operator<<(std::ostream& os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

int		Fixed::getRawBits(void) const
{
	return (this->nb);
}

void	Fixed::setRawBits(int const raw)
{
	this->nb = raw;
}

float	Fixed::toFloat(void) const
{
	int		n;
	int		sign;
	float	ret;

	sign = 1;
	n = this->nb;
	if ((n & (1 << 8)))
	{
		sign = -1;
		n = -n;
	}
	ret = (1.0f * n) / pow(2, 8);
	ret *= sign;
	return (ret);
}

int	Fixed::toInt(void) const
{
	return (this->nb >> 8);
}