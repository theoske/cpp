/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:29:23 by theo              #+#    #+#             */
/*   Updated: 2023/01/03 15:44:51 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int		i;

	if (N < 1)
		return (0);
	Zombie	*horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		horde[i].naming(name);
		i++;
	}
	return (horde);
}
