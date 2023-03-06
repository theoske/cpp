/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:43:42 by theo              #+#    #+#             */
/*   Updated: 2023/03/06 16:14:06 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	print_input(std::string entry)
{
	std::string	temp = entry;
	if (temp.length() > 10)
		temp = temp.substr(0, 10).replace(9, 1, ".");
	std::cout << temp;
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
	if (!entry.compare("0") && annuaire.contact[0].is_empty() == 0)
		annuaire.contact[0].print_details();
	else if (!entry.compare("1") && annuaire.contact[1].is_empty() == 0)
		annuaire.contact[1].print_details();
	else if (!entry.compare("2") && annuaire.contact[2].is_empty() == 0)
		annuaire.contact[2].print_details();
	else if (!entry.compare("3") && annuaire.contact[3].is_empty() == 0)
		annuaire.contact[3].print_details();
	else if (!entry.compare("4") && annuaire.contact[4].is_empty() == 0)
		annuaire.contact[4].print_details();
	else if (!entry.compare("5") && annuaire.contact[5].is_empty() == 0)
		annuaire.contact[5].print_details();
	else if (!entry.compare("6") && annuaire.contact[6].is_empty() == 0)
		annuaire.contact[6].print_details();
	else if (!entry.compare("7") && annuaire.contact[7].is_empty() == 0)
		annuaire.contact[7].print_details();
}

void	ft_search(Phonebook annuaire, int i)
{
	int		j;

	std::cout << "|" << std::setw(10) << "index" << " | " << std::setw(10);
	std::cout << "firstname" << " | " << std::setw(10);
	std::cout << "lastname" << " | " << std::setw(10);
	std::cout << "nickname" << " | " << std::endl;
	j = 0;
	while (j < 8)
	{
		std::cout << "|" << std::setw(10) << j << " | " << std::setw(10);
		annuaire.contact[j].ft_search2();
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
			annuaire.contact[i % 8].add_first();
			annuaire.contact[i % 8].add_last();
			annuaire.contact[i % 8].add_nick();
			annuaire.contact[i % 8].add_number();
			annuaire.contact[i % 8].add_secret();
			i++;
		}
		else if (entry.compare("SEARCH") == 0)
			ft_search(annuaire, i);
		std::cin >> entry;
	}
	return 0;
}
