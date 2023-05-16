/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:31:16 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/16 14:48:50 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class	Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		~Array(void);

		Array			&operator=(Array const &src);
		T				&operator[](unsigned int n) const;
		unsigned int	size(void);

	private:
		T				*_array;
		unsigned int	_size;
};

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0)
{
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = T();
	return ;
}

template <typename T>
Array<T>::Array(Array const &src) : _array(NULL), _size(0)
{
	*this = src;
	return ;
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->_array)
		delete [] this->_array;
	return ;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &src)
{
	if (this != &src)
	{
		if (this->_array)
			delete [] this->_array;
		this->_array = new T[src._size];
		this->_size = src._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
	}
	return (*this);
}

template <typename T>
T		&Array<T>::operator[](unsigned int n) const
{
	if (n >= this->_size)
		throw std::exception();
	return (this->_array[n]);
}

template <typename T>
unsigned int	Array<T>::size(void)
{
	return (this->_size);
}

#endif