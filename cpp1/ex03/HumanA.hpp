/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:46:45 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/01/04 16:47:47 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private :
		std::string	name;
		Weapon		weapon;
	public :
		HumanA(void);
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);

		void	attack(void);
};

#endif