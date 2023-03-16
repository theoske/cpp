/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:36:12 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/16 16:47:25 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

Contact	&Contact::operator=(const Contact &f)
{
	(void)	f;
	return (*this);
}

Contact::Contact(const Contact &f)
{
	*this = f;
}

void	Contact::add()
{
	std::cout << "Firstname :" << std::endl;
	std::cin >> this->firstname;
	std::cout << "Lastname :" << std::endl;
	std::cin >> this->lastname;
	std::cout << "Nickname :" << std::endl;
	std::cin >> this->nickname;
	std::cout << "Number :" << std::endl;
	std::cin >> this->number;
	std::cout << "Secret :" << std::endl;
	std::cin >> this->secret;
}

void    Contact::detail()//show all informations about a contact / checks if contact exists 
{
	std::cout << std::endl << "Firstname : ";
	std::cout << this->firstname << std::endl;
	std::cout << std::endl << "Lastname : ";
	std::cout << this->lastname << std::endl;
	std::cout << std::endl << "Nickname : ";
	std::cout << this->nickname << std::endl;
	std::cout << std::endl << "Phone number : ";
	std::cout << this->number << std::endl;
}

void    Contact::contact_info()
{
	std::string	tmp;

	tmp = this->firstname;
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 10).replace(9, 1, ".");
	std::cout << tmp;
	std::cout << " | " << std::setw(10);
	
	tmp = this->lastname;
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 10).replace(9, 1, ".");
	std::cout << tmp;
	std::cout << " | " << std::setw(10);
	
	tmp = this->nickname;
	if (tmp.length() > 10)
		tmp = tmp.substr(0, 10).replace(9, 1, ".");
	std::cout << tmp;
	std::cout << " | " << std::endl;
}
