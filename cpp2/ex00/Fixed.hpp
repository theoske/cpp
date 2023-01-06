/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:49:28 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/01/06 18:05:46 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int					comma;
		const static int	bits;
	public:
		Fixed(void);
		//constructeur de recopie
		//surcharge de l'operateur d'affection
		~Fixed();
		int		getRawBits(void) const; // retourne valeur nombre a virgule fixe sans la convertir
		void	setRawBits(int const raw); //initialise valeur nombre a virgule fixe sans la convertir
};

#endif