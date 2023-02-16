/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:06:17 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/16 17:06:36 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	player("ske");

	std::cout << std::endl;

	player.attack("ennemie");
	player.highFivesGuys();

	std::cout << std::endl;
	return (0);
}