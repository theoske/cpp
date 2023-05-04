/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:21:34 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 18:27:23 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>

class Data
{
	public:
		Data();
		Data(Data &src);
		~Data();
		Data	&operator=(Data &src);

		std::string	getStr(void);
		int			getInt(void);
		float		getFloat(void);
		double		getDouble(void);
		char		getChar(void);
		bool		getIsChar(void);
		bool		getIsInt(void);
		bool		getIsFloat(void);
		bool		getIsDouble(void);

		void		setStr(std::string str);
		void		setInt(int i);
		void		setFloat(float f);
		void		setDouble(double d);
		void		setChar(char c);
		void		setIsChar(bool b);
		void		setIsInt(bool b);
		void		setIsFloat(bool b);
		void		setIsDouble(bool b);

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

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif