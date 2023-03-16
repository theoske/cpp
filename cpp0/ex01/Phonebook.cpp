/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:33:47 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/16 16:32:20 by tkempf-e         ###   ########.fr       */
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
	int			i;
	std::string	entry;

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
	std::cout << "Do you want detailled information about a contact ? (y/n)" << std::endl;
	std::cin >> entry;
	if (entry[0] == 'y')
	{
		std::cout << "Enter a valid contact index to print details :" << std::endl;
		std::cin >> entry;
		if (!entry.compare("0"))
			this->contact[0].detail();
		else if (!entry.compare("1"))
			this->contact[1].detail();
		else if (!entry.compare("2"))
			this->contact[2].detail();
		else if (!entry.compare("3"))
			this->contact[3].detail();
		else if (!entry.compare("4"))
			this->contact[4].detail();
		else if (!entry.compare("5"))
			this->contact[5].detail();
		else if (!entry.compare("6"))
			this->contact[6].detail();
		else if (!entry.compare("7"))
			this->contact[7].detail();
	}
}