/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:45:22 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/16 17:47:14 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A new zombie is born" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << Zombie::name << " died" << std::endl;
}

Zombie	&Zombie::operator=(const Zombie &f)
{
	(void)	f;
	return (*this);
}

Zombie::Zombie(const Zombie &f)
{
	*this = f;
}

void Zombie::announce(void)
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::naming(std::string newname)
{
	this->name = newname;
}

Zombie *newZombie(std::string name)
{
	Zombie	*newzombie = new Zombie;

	newzombie->naming(name);
	return (newzombie);
}

void	randomChump(std::string name)
{
	Zombie	randomzombie;
	
	randomzombie.naming(name);
	randomzombie.announce();
	return ;
}

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
