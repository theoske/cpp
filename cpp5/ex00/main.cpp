/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:14:57 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/17 15:18:22 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	{
		std::cout << "Grade: 1" << std::endl;
		try
		{
			Bureaucrat	a("ske", 1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 150" << std::endl;
			Bureaucrat	a("ske", 150);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 50" << std::endl;
			Bureaucrat	a("ske", 50);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: -1" << std::endl;
			Bureaucrat	a("ske", -1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 155" << std::endl;
			Bureaucrat	a("ske", 155);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 150, Increment" << std::endl;
			Bureaucrat	a("ske", 150);
			std::cout << a << std::endl;
			a.operator++();
			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 1, Increment" << std::endl;
			Bureaucrat	a("ske", 1);
			std::cout << a << std::endl;
			a.operator++();
			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 1, Decrement" << std::endl;
			Bureaucrat	a("ske", 1);
			std::cout << a << std::endl;
			a.operator--();
			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 150, Decrement" << std::endl;
			Bureaucrat	a("ske", 150);
			std::cout << a << std::endl;
			a.operator--();
			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	return (0);	
}
