/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:30:04 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/16 18:05:41 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private :
		std::string	name;
		Weapon		*weapon;
	public :
		HumanB(void);
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB();
		HumanB(const HumanB &f);
		HumanB&operator=(const HumanB &f);
	
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif