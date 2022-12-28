/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:33:39 by theo              #+#    #+#             */
/*   Updated: 2022/12/28 15:37:24 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
class Contact
{
	public:
		std::string firstname;
		std::string lastname;
		std::string	nickname;
		std::string number;
		std::string	secret;
		
		void	add_first(Contact *contact)
		{
			std::cout << "Enter first name :" << std::endl;
			std::cin >> contact->firstname;
			while (contact->firstname.empty())
			{
				std::cout << "Enter first name :" << std::endl;
				std::cin >> contact->firstname;
			}
		}
		
		void	add_last(Contact *contact)
		{
			std::cout << "Enter last name :" << std::endl;
			std::cin >> contact->lastname;
			while (contact->lastname.empty())
			{
				std::cout << "Enter last name :" << std::endl;
				std::cin >> contact->lastname;
			}
		}
		
		void	add_nick(Contact *contact)
		{
			std::cout << "Enter nickname :" << std::endl;
			std::cin >> contact->nickname;
			while (contact->nickname.empty())
			{
				std::cout << "Enter nickname :" << std::endl;
				std::cin >> contact->nickname; 
			}
		}
		
		void	add_number(Contact *contact)
		{
			std::cout << "Enter phone number :" << std::endl;
			std::cin >> contact->number;
			while (contact->number.empty())
			{
				std::cout << "Enter phone number :" << std::endl;
				std::cin >> contact->number;
			}
		}
		
		void	add_secret(Contact *contact)
		{
			std::cout << "Enter deepest secret :" << std::endl;
			std::cin >> contact->secret;
			while (contact->secret.empty())
			{
				std::cout << "Enter deepest secret :" << std::endl;
				std::cin >> contact->secret;
			}
		}
};

#endif