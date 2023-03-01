/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:06:45 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/01 17:44:19 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef	CAT_HPP
# define	CAT_HPP

class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat &f);
		Cat&operator=(const Cat &f);
		virtual	~Cat();
		
		virtual void	makeSound(void) const;
};

std::ostream &operator<<(std::ostream &o, Cat const &i);

#endif