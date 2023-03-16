/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:46:45 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/16 18:05:18 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private :
		std::string	name;
		Weapon		*weapon;
	public :
		HumanA(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		HumanA(const HumanA &f);
		HumanA&operator=(const HumanA &f);

		void	attack(void);
};

#endif