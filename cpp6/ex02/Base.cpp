/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:03:32 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 19:32:29 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
}

Base::~Base()
{
}

Base *generate(void)
{
	int i = rand() % 3;

	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	try
	{
		A *a = dynamic_cast<A*>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::exception &e)
	{
		try
		{
			B *b = dynamic_cast<B*>(p);
			std::cout << "B" << std::endl;
			(void)b;
		}
		catch (std::exception &e)
		{
			try
			{
				C *c = dynamic_cast<C*>(p);
				std::cout << "C" << std::endl;
				(void)c;
			}
			catch (std::exception &e)
			{
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			(void)b;
		}
		catch (std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
				(void)c;
			}
			catch (std::exception &e)
			{
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}