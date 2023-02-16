/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:36:09 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/16 15:43:53 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &f);
	ScavTrap&operator=(const ScavTrap &f);
    ~ScavTrap(void);

	void	guardGate();
	void	attack(const std::string &target);
};

#endif