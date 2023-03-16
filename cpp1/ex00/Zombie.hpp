/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:30:52 by theo              #+#    #+#             */
/*   Updated: 2023/03/16 17:39:44 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private :
		std::string	name;
	public :
		Zombie(void);
		~Zombie(void);
		Zombie(const Zombie &f);
		Zombie&operator=(const Zombie &f);

		void announce(void);
		void naming(std::string newname);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif