/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:37:22 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 17:30:59 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>

class Convert
{
	public:
		Convert(std::string str);
		Convert(Convert const &src);
		~Convert();
		Convert	&operator=(Convert const &src);

		void		convertChar(void);
		void		convertInt(void);
		void		convertFloat(void);
		void		convertDouble(void);
		std::string	getStr(void);

	private:
		std::string	_str;
		int			_int;
		float		_float;
		double		_double;
		char		_char;
		bool		_isChar;
		bool		_isInt;
		bool		_isFloat;
		bool		_isDouble;
};

int	arg_error(void);

#endif

