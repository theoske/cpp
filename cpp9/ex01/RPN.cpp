/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:03:26 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/18 17:21:41 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _exit(false)
{
}

RPN::RPN(RPN const &src) : _stack(src._stack), _exit(src._exit)
{
	*this = src;
}

RPN::~RPN()
{
}

RPN	&RPN::operator=(RPN const &src)
{
	this->_stack = src._stack;
	this->_exit = src._exit;
	return (*this);
}

void	RPN::compute(std::string str)
{
	std::stringstream	ss(str);
	std::string			tmp;
	std::string			operators = "+-*/%";

	while (ss >> tmp)
	{
		if (tmp.size() == 1 && operators.find(tmp[0]) != std::string::npos)
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Not enough values in stack");
			if (tmp[0] == '+')
				add();
			else if (tmp[0] == '-')
				sub();
			else if (tmp[0] == '*')
				mul();
			else if (tmp[0] == '/')
				div();
			else if (tmp[0] == '%')
				mod();
		}
		else
			push(tmp);
	}
	print();
}

void	RPN::push(std::string str)
{
	long int		nb;
	char			*end;

	nb = std::strtol(str.c_str(), &end, 10);
	if (end == str || *end)
		throw std::runtime_error("Invalid value");
	_stack.push(nb);
}

void	RPN::pop()
{
	if (_stack.empty())
		throw std::runtime_error("Pop on empty stack");
	_stack.pop();
}

void	RPN::dump()
{
	std::stack<int>	tmp = _stack;

	while (!tmp.empty())
	{
		std::cout << tmp.top() << std::endl;
		tmp.pop();
	}
}

void	RPN::assertt(std::string str)
{
	int		nb;
	char	*end;

	nb = std::strtol(str.c_str(), &end, 10);
	if (*end)
		throw std::runtime_error("Invalid value");
	if (_stack.empty())
		throw std::runtime_error("Assert on empty stack");
	if (_stack.top() != nb)
		throw std::runtime_error("Assert failed");
}

void	RPN::add()
{
	int		a;
	int		b;

	if (_stack.size() < 2)
		throw std::runtime_error("Not enough values in stack");
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	_stack.push(a + b);
}

void	RPN::sub()
{
	int		a;
	int		b;

	if (_stack.size() < 2)
		throw std::runtime_error("Not enough values in stack");
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	_stack.push(b - a);
}

void	RPN::mul()
{
	int		a;
	int		b;

	if (_stack.size() < 2)
		throw std::runtime_error("Not enough values in stack");
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	_stack.push(a * b);
}

void	RPN::div()
{
	int		a;
	int		b;

	if (_stack.size() < 2)
		throw std::runtime_error("Not enough values in stack");
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	if (a == 0)
		throw std::runtime_error("Division by zero");
	_stack.push(b / a);
}

void	RPN::mod()
{
	int		a;
	int		b;

	if (_stack.size() < 2)
		throw std::runtime_error("Not enough values in stack");
	a = _stack.top();
	_stack.pop();
	b = _stack.top();
	_stack.pop();
	if (a == 0)
		throw std::runtime_error("Modulo by zero");
	_stack.push(b % a);
}

void	RPN::print()
{
	if (_stack.empty())
		throw std::runtime_error("Print on empty stack");
	std::cout << _stack.top() << std::endl;
}

void	RPN::exit()
{
	_exit = true;
}
