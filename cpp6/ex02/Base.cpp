/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:03:32 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 20:06:33 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <random>

Base::Base()
{
}

Base::~Base()
{
}

Base *generate(void)
{
	// Create a Mersenne Twister engine and seed it with a random device
    std::random_device rd;
    std::mt19937 engine(rd());
    
    // Create a distribution object that produces integers between 0 and 2
    std::uniform_int_distribution<int> distribution(0, 2);
    
    // Generate a random number
    int i = distribution(engine);
    
	if (i == 1)
		return (new A);
	else if (i % 3 == 2)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);

	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
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