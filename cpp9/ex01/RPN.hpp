/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:03:32 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/18 16:09:38 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <sstream>
# include <cmath>

class RPN
{
	public:
		RPN();
		RPN(RPN const &src);
		~RPN();
		RPN	&operator=(RPN const &src);

		void	compute(std::string str);
		void	push(std::string str);
		void	pop();
		void	dump();
		void	assertt(std::string str);
		void	add();
		void	sub();
		void	mul();
		void	div();
		void	mod();
		void	print();
		void	exit();

	private:
		std::stack<int>	_stack;
		bool			_exit;
};

#endif