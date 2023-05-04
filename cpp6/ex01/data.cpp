/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:22:34 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 18:48:19 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

Data::Data()
{
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(Data &src) : _str(src.getStr()), _int(src.getInt()), _float(src.getFloat()), _double(src.getDouble()), _char(src.getChar()), _isChar(src.getIsChar()), _isInt(src.getIsInt()), _isFloat(src.getIsFloat()), _isDouble(src.getIsDouble())
{
	*this = src;
}

Data::~Data()
{
	std::cout << "Data destructor called" << std::endl;
}

Data	&Data::operator=(Data &src)
{
	if (this != &src)
	{
		this->_str = src.getStr();
		this->_int = src.getInt();
		this->_float = src.getFloat();
		this->_double = src.getDouble();
		this->_char = src.getChar();
		this->_isChar = src.getIsChar();
		this->_isInt = src.getIsInt();
		this->_isFloat = src.getIsFloat();
		this->_isDouble = src.getIsDouble();
	}
	return (*this);
}

std::string	Data::getStr(void)
{
	return (this->_str);
}

int			Data::getInt(void)
{
	return (this->_int);
}

float		Data::getFloat(void)
{
	return (this->_float);
}

double		Data::getDouble(void)
{
	return (this->_double);
}

char		Data::getChar(void)
{
	return (this->_char);
}

bool		Data::getIsChar(void)
{
	return (this->_isChar);
}

bool		Data::getIsInt(void)
{
	return (this->_isInt);
}

bool		Data::getIsFloat(void)
{
	return (this->_isFloat);
}

bool		Data::getIsDouble(void)
{
	return (this->_isDouble);
}

void		Data::setStr(std::string str)
{
	this->_str = str;
}

void		Data::setInt(int i)
{
	this->_int = i;
}

void		Data::setFloat(float f)
{
	this->_float = f;
}

void		Data::setDouble(double d)
{
	this->_double = d;
}

void		Data::setChar(char c)
{
	this->_char = c;
}

void		Data::setIsChar(bool b)
{
	this->_isChar = b;
}

void		Data::setIsInt(bool b)
{
	this->_isInt = b;
}

void		Data::setIsFloat(bool b)
{
	this->_isFloat = b;
}

void		Data::setIsDouble(bool b)
{
	this->_isDouble = b;
}

std::ostream	&operator<<(std::ostream &o, Data &d)
{
	if (d.getIsChar())
		o << "char: " << d.getChar() << std::endl;
	if (d.getIsInt())
		o << "int: " << d.getInt() << std::endl;
	if (d.getIsFloat())
		o << "float: " << d.getFloat() << std::endl;
	if (d.getIsDouble())
		o << "double: " << d.getDouble() << std::endl;
	return (o);
}

//unlike static_cast, reinterpret_cast doesnt check if the cast is possible
uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
