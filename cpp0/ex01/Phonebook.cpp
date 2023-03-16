/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:33:47 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/15 17:35:47 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook constructor called." << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor called." << std::endl;
}

Phonebook	&Phonebook::operator=(const Phonebook &f)
{
	(void)	f;
	return (*this);
}

Phonebook::Phonebook(const Phonebook &f)
{
	*this = f;
}

void	Phonebook::add_contact()
{
	static int	i = 0;

	this->contact[i % 8].add();
	i++;
}

void    Phonebook::search_contact()//show entire phonebook
{
	int		i;

	std::cout << "|" << std::setw(10) << "index" << " | " << std::setw(10);
	std::cout << "firstname" << " | " << std::setw(10);
	std::cout << "lastname" << " | " << std::setw(10);
	std::cout << "nickname" << " | " << std::endl;
	i = 0;
	while (i < 8)
	{
		std::cout << "|" << std::setw(10) << i << " | " << std::setw(10);
		this->contact[i].contact_info();
		i++;
	}
}