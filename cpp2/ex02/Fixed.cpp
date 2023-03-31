/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:39:21 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/12 16:41:50 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->nb = 0;
}

Fixed::Fixed(const Fixed &tocopy)
{
	*this = tocopy;
}

Fixed::Fixed(const int cnb)
{
	this->setRawBits(cnb << 8);
}

Fixed::Fixed(const float cfnb)
{
	this->setRawBits(roundf((cfnb * 256)));
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(const Fixed& f)
{
	this->setRawBits(f.getRawBits());
	return (*this);
}

Fixed	&Fixed::operator+(const Fixed &f)
{
	int	result = this->getRawBits() + f.getRawBits();

	this->setRawBits(result);
	return (*this);
}

Fixed	&Fixed::operator-(const Fixed &f)
{
	int	result = this->getRawBits() - f.getRawBits();

	this->setRawBits(result);
	return (*this);
}

Fixed	&Fixed::operator*(const Fixed &f)
{
	long	result = (long)this->getRawBits() * (long)f.getRawBits();

	result = result >> 8;
	this->setRawBits((int) result);
	return (*this);
}

Fixed	&Fixed::operator/(const Fixed &f)
{
	int	a = (this->getRawBits() * (1 << 8)) / f.getRawBits();

	this->setRawBits(a);
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	int	result = this->getRawBits();

	this->setRawBits(++result);
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	int	result = this->getRawBits();

	this->setRawBits(--result);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;

	operator++();
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	operator--();
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
	ret = (1.0f * n) / (1 << 8);
	ret *= sign;
	return (ret);
}

int	Fixed::toInt(void) const
{
	return (this->nb >> 8);
}
