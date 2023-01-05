/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 20:14:53 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/01/05 20:31:52 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public :
		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif