/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:52:27 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/02 15:59:02 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
# define	WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal
{
	private:
		/* data */
	public:
		WrongAnimal(/* args */);
		WrongAnimal(const WrongAnimal &f);
		WrongAnimal&operator=(const WrongAnimal &f);
		~WrongAnimal();

		void		makeSound() const;
		std::string	getType() const;
	protected:
		std::string	type;
};

#endif