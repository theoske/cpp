/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:37:33 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/03 14:42:00 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define	BRAIN_HPP

# include "Animal.hpp"

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(/* args */);
		Brain(const Brain &f);
		Brain&operator=(const Brain &f);
		~Brain();
};


#endif