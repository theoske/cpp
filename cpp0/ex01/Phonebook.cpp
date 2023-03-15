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

}

Phonebook::~Phonebook()
{

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