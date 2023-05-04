/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:38:07 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 17:29:56 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert(std::string str) : _str(str), _int(0), _float(0), _double(0), _char(0), _isChar(false), _isInt(false), _isFloat(false), _isDouble(false)
{
	std::cout << "Convert constructor called" << std::endl;
}

Convert::Convert(Convert const &src) : _str(src._str), _int(src._int), _float(src._float), _double(src._double), _char(src._char), _isChar(src._isChar), _isInt(src._isInt), _isFloat(src._isFloat), _isDouble(src._isDouble)
{
	*this = src;
}

Convert::~Convert()
{
	std::cout << "Convert destructor called" << std::endl;
}

Convert &Convert::operator=(Convert const &src)
{
	this->_str = src._str;
	this->_int = src._int;
	this->_float = src._float;
	this->_double = src._double;
	this->_char = src._char;
	this->_isChar = src._isChar;
	this->_isInt = src._isInt;
	this->_isFloat = src._isFloat;
	this->_isDouble = src._isDouble;
	return (*this);
}

void Convert::convertChar()
{
	std::cout << "char: ";
	try
	{
		int i = std::stoi(this->_str);
		if (i < 0 || i > 127)
			throw std::exception();
		if (i < 32 || i == 127)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void Convert::convertInt()
{
	std::cout << "int: ";
	try
	{
		int i = std::stoi(this->_str);
		std::cout << i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void Convert::convertFloat()
{
	std::cout << "float: ";
	try
	{
		float f = std::stof(this->_str);
		if (f - static_cast<int>(f) == 0)
			std::cout << f << ".0f" << std::endl;
		else
			std::cout << f << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void Convert::convertDouble()
{
	std::cout << "double: ";
	try
	{
		double d = std::stod(this->_str);
		if (d - static_cast<int>(d) == 0)
			std::cout << d << ".0" << std::endl;
		else
			std::cout << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
}

std::string Convert::getStr()
{
	return (this->_str);
}
