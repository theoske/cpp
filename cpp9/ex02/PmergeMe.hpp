/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:31:45 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/23 13:25:41 by tkempf-e         ###   ########.fr       */
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

class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &src);
		~PmergeMe();
		PmergeMe	&operator=(PmergeMe const &src);

		void	insertionSort(std::vector<int> &arr);
		void	merge(std::vector<int> &arr, int left, int mid, int right);
		void	mergeInsertSort(char *argv1);
		void	mergeSort(std::vector<int>& arr, int left, int right);

	
	private:
		std::vector<int>	_arg;
};

#endif
