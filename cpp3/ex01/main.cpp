/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:06:17 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/14 17:55:07 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	player("ske");

	std::cout << "Values: " << std::endl;

	std::cout << "Life: " << player.gethp() << std::endl;
	std::cout << "Energy: " << player.getep() << std::endl;
	std::cout << "Damage points: " << player.getad() << std::endl;

	std::cout << std::endl;

	player.attack("vampire");
	player.takeDamage(0);
	player.takeDamage(3);

	std::cout << std::endl;

	std::cout << "Values: " << std::endl;

	std::cout << "Life: " << player.gethp() << std::endl;
	std::cout << "Energy: " << player.getep() << std::endl;
	std::cout << "Damage points: " << player.getad() << std::endl;

	std::cout << std::endl;

	player.beRepaired(0);
	player.beRepaired(10);

	player.attack("vampire");

	std::cout << std::endl;

	std::cout << "Values: " << std::endl;

	std::cout << "Life: " << player.gethp() << std::endl;
	std::cout << "Energy: " << player.getep() << std::endl;
	std::cout << "Damage points: " << player.getad() << std::endl;

	player.attack("vampire");
	player.attack("vampire");
	player.attack("vampire");
	player.attack("vampire");
	player.takeDamage(8);
	player.attack("vampire");
	player.attack("vampire");
	player.attack("vampire");
	player.attack("vampire");

	player.attack("vampire");
	player.beRepaired(10);

	return (0);
}