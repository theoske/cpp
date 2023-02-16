/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:47:04 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/16 17:06:14 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		/* data */
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &f);
		~FragTrap();

		FragTrap	&operator=(const FragTrap &f);
		
		void	highFivesGuys(void);
		void	attack(const std::string &target);
};
