/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:56:54 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/01/05 17:21:16 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	Weapon	club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	return (0);
}

// int	main()
// {
// 	Weapon	club = Weapon("crude spiked club");
// 	HumanB jim("Jim");
// 	jim.setWeapon(club);
// 	jim.attack();
// 	club.setType("some other type of club");
// 	jim.attack();
// 	return (0);
// }