/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:00:35 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/02 15:00:31 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define	ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	private:
		
	public:
		Animal();
		Animal(const Animal &f);
		Animal&operator=(const Animal &f);
		virtual ~Animal();

		void			setType(std::string type);
		std::string		getType() const;
		virtual void	makeSound() const;

	protected:
		std::string	type;
};

#endif