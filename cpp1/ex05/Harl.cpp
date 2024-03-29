/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 20:15:05 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/16 18:10:52 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl is comming for you..." << std::endl << std::endl;
	sleep(2);
}

Harl::~Harl()
{
	sleep(2);
	std::cout << std::endl << "Harl is leaving..." << std::endl;
}

Harl	&Harl::operator=(const Harl &f)
{
	(void)	f;
	return (*this);
}

Harl::Harl(const Harl &f)
{
	*this = f;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int		i;

	std::string	levels[] = {"debug", "info", "warning", "error"};
	void (Harl::*fptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	i = 0;
	while(i < 4)
	{
		if (levels[i] == level)
			(*this.*fptr[i])();
		i++;
	}
}