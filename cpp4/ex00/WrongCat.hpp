/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:06:41 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/02 16:20:54 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
# define	WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		/* data */
	public:
		WrongCat(/* args */);
		WrongCat(const WrongCat &f);
		WrongCat&operator=(const WrongCat &f);
		~WrongCat();
		
		void	makeSound(void) const;
};

std::ostream &operator<<(std::ostream &o, WrongCat const &i);

#endif