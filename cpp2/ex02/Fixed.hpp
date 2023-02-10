/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 15:38:47 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/10 16:31:14 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int					nb;
		const static int	bits;
	public:
		Fixed(void);
		Fixed(const Fixed &tocopy);
		Fixed(const int cnb);
		Fixed(const float cfnb);
		~Fixed();
		Fixed&operator=(const Fixed &f);
		Fixed&operator+(const Fixed &f);
		Fixed&operator-(const Fixed &f);
		Fixed&operator*(const Fixed &f);
		Fixed&operator/(const Fixed &f);

		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		bool	operator>(const Fixed &f);
		bool	operator<(const Fixed &f);
		bool	operator>=(const Fixed &f);
		bool	operator<=(const Fixed &f);
		bool	operator==(const Fixed &f);
		bool	operator!=(const Fixed &f);
		
		static Fixed	min(Fixed &f, Fixed &s);
		static Fixed	min(const Fixed &f, const Fixed &s);
		static Fixed	max(Fixed &f, Fixed &s);
		static Fixed	max(const Fixed &f, const Fixed &s);
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed &f);

#endif