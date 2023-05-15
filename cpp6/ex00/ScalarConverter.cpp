/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:38:07 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/15 16:00:18 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal)
{
	// Try converting to char
	std::cout << "char: ";
	try
	{
		int i = 0;
		if (literal.length() == 1)
			i = static_cast<int>(literal[0]);	
		else
			i = std::stoi(literal);
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
	
	// Try converting to int
	std::cout << "int: ";
	try
	{
		int i = std::stoi(literal);
		std::cout << i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}

	// Try converting to float
	std::cout << "float: ";
	try
	{
		float f = std::stof(literal);
		if (f - static_cast<int>(f) == 0)
			std::cout << f << ".0f" << std::endl;
		else
			std::cout << f << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible" << std::endl;
	}
	// Try converting to double
	std::cout << "double: ";
	try
	{
		double d = std::stod(literal);
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
