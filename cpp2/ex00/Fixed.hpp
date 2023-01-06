/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:49:28 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/01/06 19:34:48 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int					nb;
		const static int	bits;
	public:
		Fixed(void);
		Fixed(Fixed &tocopy);
		~Fixed();
		void 	operator ++();//mal fait
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif