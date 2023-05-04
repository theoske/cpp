/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:37:22 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 18:28:22 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include "data.hpp"

class Convert
{
	public:
		Convert(std::string str);
		Convert(Convert &src);
		~Convert();
		Convert	&operator=(Convert &src);

		void		convertChar(void);
		void		convertInt(void);
		void		convertFloat(void);
		void		convertDouble(void);
		std::string	getStr(void);

		uintptr_t	serialize(Data* ptr);
		Data*		deserialize(uintptr_t raw);

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

