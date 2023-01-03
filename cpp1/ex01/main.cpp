/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:53:45 by theo              #+#    #+#             */
/*   Updated: 2023/01/03 15:52:42 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*horde;

	// zombie1 = newZombie("bertrand");
	// zombie1->announce();
	// delete zombie1;

	// std::cout << std::endl;

	// randomChump("jennie");
	horde = zombieHorde(10, "Maria");
	// int		i = 10;
	// while (i-- > 0)
	// 	horde[i].announce();
	delete [] horde;
	return (0);
}