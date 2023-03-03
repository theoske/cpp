/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:24:33 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/03 14:45:14 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define	DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(const Dog &f);
		Dog&operator=(const Dog &f);
		virtual	~Dog();

		virtual void	makeSound(void) const;
};

std::ostream &operator<<(std::ostream &o, Dog const &i);

#endif