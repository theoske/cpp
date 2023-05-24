/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:31:45 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/24 18:24:41 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <stack>
# include <sstream>
# include <cmath>
# include <vector>
# include <list>
# include <sys/time.h>

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &src);
		~PmergeMe();
		PmergeMe	&operator=(PmergeMe const &src);

		template <typename C>
		void	merge(C &arr, typename C::iterator left, typename C::iterator mid, typename C::iterator right);
		template <typename C>
		void	mergeInsertSort(C &argv1);
		template <typename C>
		void	mergeSort(C &arr, typename C::iterator left, typename C::iterator right);
};

#endif
