/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:07:02 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/10 16:21:21 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{};
		MutantStack(MutantStack const &src)
		{
			std::stack<T>::operator=(src);
		};
		~MutantStack()
		{};

		MutantStack	&operator=(MutantStack const &src)
		{
			std::stack<T>::operator=(src);
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
		{
			return std::stack<T>::c.begin();
		};
		iterator	end()
		{
			return std::stack<T>::c.end();
		};
};

#endif