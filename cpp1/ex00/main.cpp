/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:53:45 by theo              #+#    #+#             */
/*   Updated: 2023/01/03 15:15:33 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie1;

	zombie1 = newZombie("Castor");
	zombie1->announce();
	delete zombie1;

	std::cout << std::endl;

	randomChump("Nini");

	return (0);
}