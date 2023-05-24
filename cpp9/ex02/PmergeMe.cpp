/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:32:20 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/24 18:34:00 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe	&PmergeMe::operator=(PmergeMe const &src)
{
	(void)src;
	return (*this);
}

template <typename C>
void PmergeMe::mergeSort(C &arr, typename C::iterator left, typename C::iterator right)
{
    if (std::distance(left, right) > 1) {
        typename C::iterator mid = left;
        std::advance(mid, std::distance(left, right) / 2);

        mergeSort(arr, left, mid);
        mergeSort(arr, mid, right);
        merge(arr, left, mid, right);
    }
}

template <typename C>
void	PmergeMe::mergeInsertSort(C &arr)
{
	typename C::iterator it;
	
	std::cout << "Unsorted array: ";
	for (it = arr.begin(); it != arr.end(); ++it)
        std::cout << *it << " ";
	std::cout << std::endl;
	it = arr.begin();
	std::advance(it, arr.size());
	mergeSort(arr, arr.begin(), it);
	std::cout << "Sorted array: ";
	for (it = arr.begin(); it != arr.end(); ++it)
        std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename C>
void	PmergeMe::merge(C &arr, typename C::iterator left, typename C::iterator mid, typename C::iterator right)
{
    C mergedList;
	C v = arr;
	(void)v;
    typename C::iterator it1 = left;
    typename C::iterator it2 = mid;

    while (it1 != mid && it2 != right) {
        if (*it1 <= *it2) {
            mergedList.push_back(*it1);
            ++it1;
        } else {
            mergedList.push_back(*it2);
            ++it2;
        }
    }

    while (it1 != mid) {
        mergedList.push_back(*it1);
        ++it1;
    }

    while (it2 != right) {
        mergedList.push_back(*it2);
        ++it2;
    }

    std::copy(mergedList.begin(), mergedList.end(), left);
}

template void	PmergeMe::mergeInsertSort(std::list<int> &arr);
template void	PmergeMe::mergeInsertSort(std::vector<int> &arr);