/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:44:59 by theo              #+#    #+#             */
/*   Updated: 2023/02/09 18:05:41 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	Contact::add_first(void)
{
	std::cout << "Enter first name :" << std::endl;
	std::cin >> this->firstname;
}
	
void	Contact::add_last(void)
{
	std::cout << "Enter last name :" << std::endl;
	std::cin >> this->lastname;
}

void	Contact::add_nick(void)
{
	std::cout << "Enter nickname :" << std::endl;
	std::cin >> this->nickname;
}

void	Contact::add_number(void)
{
	std::cout << "Enter phone number :" << std::endl;
	std::cin >> this->number;
}

void	Contact::add_secret(void)
{
	std::cout << "Enter deepest secret :" << std::endl;
	std::cin >> this->secret;
}

void	Contact::print_details(void)
{
	std::cout << "Firstname :" << std::endl;
	std::cout << this->firstname << std::endl;
	std::cout << "Lastname :" << std::endl;
	std::cout << this->lastname << std::endl;
	std::cout << "Nickname :" << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << "Phone number :" << std::endl;
	std::cout << this->number << std::endl;
	std::cout << "Deepest dirtiest naughtiest secret :" << std::endl;
	std::cout << this->secret << std::endl;
}

void	Contact::ft_search2(void)
{
	print_input(this->firstname);
	std::cout << " | " << std::setw(10);
	print_input(this->lastname);
	std::cout << " | " << std::setw(10);
	print_input(this->nickname);
	std::cout << " | " << std::endl;
}

int		Contact::is_empty(void)
{
	if (this->firstname.empty())
		return (-1);
	return (0);
}