/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:30:04 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/01/05 17:07:08 by tkempf-e         ###   ########.fr       */
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
	
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif