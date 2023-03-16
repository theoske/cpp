/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:20:24 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/16 16:25:43 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    std::string	entry;
	Phonebook	annuaire;
	int			i;

	std::cout << "Welcome to the phonebook" << std::endl;
    std::cout << "Enter a valid command (ADD/SEARCH/EXIT) :" << std::endl;
	std::cin >> entry;
	i = 0;
	while (entry.compare("EXIT") != 0)
	{
		if (entry.compare("ADD") == 0)
			annuaire.add_contact();
		else if (entry.compare("SEARCH") == 0)
			annuaire.search_contact();
		std::cin >> entry;
	}
	return 0;
}
