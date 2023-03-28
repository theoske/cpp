/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:52:16 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/03 14:57:23 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is formed..." << std::endl;
}

Brain::Brain(const Brain &f)
{
	*this = f;
}

Brain	&Brain::operator=(const Brain &f)
{
	(void)	f;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain got smashed..." << std::endl;
}
