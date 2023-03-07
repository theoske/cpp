/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:52:44 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/07 17:39:22 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook constructor called" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor called" << std::endl;
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