/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:43:42 by theo              #+#    #+#             */
/*   Updated: 2022/12/28 15:25:38 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	print_input(std::string entry)
{
	std::string	temp = entry;
	if (temp.length() > 10)
		temp = temp.substr(0, 10).replace(9, 1, ".");
	std::cout << temp;
}

void	print_details(Contact contact[8], int i)
{
	std::cout << "Firstname :" << std::endl;
	std::cout << contact[i].firstname << std::endl;
	std::cout << "Lastname :" << std::endl;
	std::cout << contact[i].lastname << std::endl;
	std::cout << "Nickname :" << std::endl;
	std::cout << contact[i].nickname << std::endl;
	std::cout << "Phone number :" << std::endl;
	std::cout << contact[i].number << std::endl;
	std::cout << "Deepest dirtiest naughtiest secret :" << std::endl;
	std::cout << contact[i].secret << std::endl;
}

void	show_contact(Phonebook annuaire, int i)
{
	std::string	entry;

	if (i > 7)
		i = 7;
	while (entry.empty() || entry[0] > '7' || entry.length() > 1)
	{
		std::cout << "Enter a valid contact number for more info :" << std::endl;
		std::cin >> entry;
	}
	if (!entry.compare("0") && !annuaire.contact[0].firstname.empty())
		print_details(annuaire.contact, 0);
	else if (!entry.compare("1") && !annuaire.contact[1].firstname.empty())
		print_details(annuaire.contact, 1);
	else if (!entry.compare("2") && !annuaire.contact[2].firstname.empty())
		print_details(annuaire.contact, 2);
	else if (!entry.compare("3") && !annuaire.contact[3].firstname.empty())
		print_details(annuaire.contact, 3);
	else if (!entry.compare("4") && !annuaire.contact[4].firstname.empty())
		print_details(annuaire.contact, 4);
	else if (!entry.compare("5") && !annuaire.contact[5].firstname.empty())
		print_details(annuaire.contact, 5);
	else if (!entry.compare("6") && !annuaire.contact[6].firstname.empty())
		print_details(annuaire.contact, 6);
	else if (!entry.compare("7") && !annuaire.contact[7].firstname.empty())
		print_details(annuaire.contact, 7);
}

void	ft_search(Phonebook annuaire, int i)
{
	int		j;

	j = 0;
	std::cout << "|" << std::setw(10) << "index" << " | " << std::setw(10);
	std::cout << "firstname" << " | " << std::setw(10);
	std::cout << "lastname" << " | " << std::setw(10);
	std::cout << "nickname" << " | " << std::endl;
	while (j < 8 && !annuaire.contact[j].firstname.empty() &&
		!annuaire.contact[j].lastname.empty() && !annuaire.contact[j].number.empty())
	{
		std::cout << "|" << std::setw(10) << j << " | " << std::setw(10);
		print_input(annuaire.contact[j].firstname);
		std::cout << " | " << std::setw(10);
		print_input(annuaire.contact[j].lastname);
		std::cout << " | " << std::setw(10);
		print_input(annuaire.contact[j].nickname);
		std::cout << " | " << std::endl;
		j++;
	}
	show_contact(annuaire, i);
}

int	main()
{
	std::string	entry;
	Phonebook	annuaire;
	int			i;

	std::cout << "Bienvenue dans l'annuaire" << std::endl;
	std::cin >> entry;
	i = 0;
	while (entry.compare("EXIT") != 0)
	{
		if (entry.compare("ADD") == 0)
		{
			annuaire.contact[i % 8].add_first(&annuaire.contact[i % 8]);
			annuaire.contact[i % 8].add_last(&annuaire.contact[i % 8]);
			annuaire.contact[i % 8].add_nick(&annuaire.contact[i % 8]);
			annuaire.contact[i % 8].add_number(&annuaire.contact[i % 8]);
			annuaire.contact[i % 8].add_secret(&annuaire.contact[i % 8]);
			i++;
		}
		else if (entry.compare("SEARCH") == 0)
			ft_search(annuaire, i);
		std::cin >> entry;
	}
	return 0;
}
