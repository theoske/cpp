/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:28:41 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/10 14:27:19 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(Span const &src) : _n(src._n), _v(src._v)
{
	*this = src;
}

Span::~Span()
{
}

Span	&Span::operator=(Span const &src)
{
	this->_n = src._n;
	this->_v = src._v;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->_v.size() < this->_n)
		this->_v.push_back(n);
	else
		throw std::exception();
}

int		Span::shortestSpan()
{
	if (this->_v.size() < 2)
		throw std::exception();
	std::vector<int> v = this->_v;
	std::sort(v.begin(), v.end());
	int min = v[1] - v[0];
	for (unsigned int i = 1; i < v.size(); i++)
	{
		if (v[i] - v[i - 1] < min)
			min = v[i] - v[i - 1];
	}
	return (min);
}

int		Span::longestSpan()
{
	if (this->_v.size() < 2)
		throw std::exception();
	std::vector<int> v = this->_v;
	std::sort(v.begin(), v.end());
	return (v[v.size() - 1] - v[0]);
}

std::vector<int>	&Span::getV()
{
	return (this->_v);
}

void	range(int start, int end, std::vector<int> &v)
{
	if (start < end)
	{
		for (int i = start; i <= end; i++)
			v.push_back(i);
	}
	else
	{
		for (int i = start; i >= end; i--)
			v.push_back(i);
	}
}
