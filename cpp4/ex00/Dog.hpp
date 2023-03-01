/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:24:33 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/01 16:58:49 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef	DOG_HPP
# define	DOG_HPP

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &f);
		Dog&operator=(const Dog &f);
		virtual	~Dog();
		
		virtual void	makeSound(void);
};

#endif