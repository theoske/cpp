/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:43:42 by theo              #+#    #+#             */
/*   Updated: 2022/12/27 12:06:49 by theo             ###   ########.fr       */
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

void	ft_search(Phonebook annuaire)
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
}

// rentrer un index ensuite permet de voir un contact avec infos ligne par ligne
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
			i++;
			if (i == 9)
				i = 1;
			annuaire.contact[i - 1].add_first(&annuaire.contact[i - 1]);
			annuaire.contact[i - 1].add_last(&annuaire.contact[i - 1]);
			annuaire.contact[i - 1].add_nick(&annuaire.contact[i - 1]);
			annuaire.contact[i - 1].add_number(&annuaire.contact[i - 1]);
			annuaire.contact[i - 1].add_secret(&annuaire.contact[i - 1]);
		}
		else if (entry.compare("SEARCH") == 0)
			ft_search(annuaire);
		std::cin >> entry;
	}
	return 0;
}
