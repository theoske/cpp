/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:30:52 by theo              #+#    #+#             */
/*   Updated: 2023/01/03 15:19:32 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private :
		std::string	name;
	public :
		void announce(void)
		{
			std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
			return ;
		};
		void naming(std::string newname)
		{
			Zombie::name = newname;
		};
		Zombie(void);
		~Zombie(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
