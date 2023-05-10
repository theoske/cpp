/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:28:51 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/10 14:26:48 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &src);
		~Span();

		Span	&operator=(Span const &src);

		void				addNumber(int n);
		int					shortestSpan();
		int					longestSpan();
		std::vector<int>	&getV();

	private:
		unsigned int		_n;
		std::vector<int>	_v;
};

void	range(int start, int end, std::vector<int> &v);

#endif
