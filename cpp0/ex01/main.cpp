/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:43:42 by theo              #+#    #+#             */
/*   Updated: 2022/12/26 17:25:29 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	std::string	entry;
	Phonebook	annuaire;
	int			i;
	int			j;

	std::cout << "Bienvenue dans l'annuaire" << std::endl;
	std::cin >> entry;
	i = 0;
	while (entry.compare("EXIT") != 0)
	{
		if (entry.compare("ADD") == 0)
		{
			i++;
			annuaire.contact[(i % 9)- 1].add_first(&annuaire.contact[(i % 9) - 1]);
			annuaire.contact[(i % 9) - 1].add_last(&annuaire.contact[(i % 9) - 1]);
			annuaire.contact[(i % 9) - 1].add_number(&annuaire.contact[(i % 9) - 1]);
			annuaire.contact[(i % 9) - 1].add_secret(&annuaire.contact[(i % 9) - 1]);
		}
		else if (entry.compare("SEARCH") == 0)
		{
			j = 0;
			while (j < 8)
			{
				std::cout << annuaire.contact[j].lastname << std::endl;
				std::cout << annuaire.contact[j].firstname << std::endl;
				std::cout << annuaire.contact[j].number << std::endl;
				std::cout << annuaire.contact[j].secret << std::endl;
				j++;
			}
		}
		std::cin >> entry;
	}
	return 0;
}