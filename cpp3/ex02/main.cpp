/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:06:17 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/16 15:56:26 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	player("ske");

	std::cout << std::endl;
	player.attack("ennemie");
	player.guardGate();
	std::cout << std::endl;

	player.beRepaired(1);
	player.takeDamage(50);

	player.attack("ennemie");
	

	std::cout << std::endl;
	return (0);
}