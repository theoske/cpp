/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:32:20 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/23 15:18:50 by tkempf-e         ###   ########.fr       */
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

//separer en paires, les trier, les fusionner
//insertion sort si < 20
template <typename C>
void PmergeMe::insertionSort(C &arr)
{
    for (typename C::iterator it = arr.begin(); it != arr.end(); ++it)
	{
        typename C::iterator key = it;
        typename C::iterator it2 = it-1;
        // Move elements greater than key to one position ahead
        while (it2 >= arr.begin() && *it2 > *key)
		{
            *(it2+1) = *it2;
            it2--;
        }
        *(it2+1) = *key;
    }
}

template <typename C>
void PmergeMe::mergeSort(C &arr, int left, int right)
{
    if (left < right)
	{
        if (right - left + 1 <= 20)
		{
            insertionSort(arr);
        }
		else
		{
            int mid = left + (right - left) / 2;
            
            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            
            merge(arr, left, mid, right);
        }
    }
}

template <typename C>
void	PmergeMe::mergeInsertSort(C &arr)
{
	typename C::iterator it;
	
	std::cout << "Unsorted array: ";
	for (it = arr.begin(); it != arr.end(); ++it)
        std::cout << *it << " ";
	if (arr.size() <= 20)
		insertionSort(arr);
	else
		mergeSort(arr, 0, arr.size() - 1);
	std::cout << "Sorted array: ";
	for (it = arr.begin(); it != arr.end(); ++it)
        std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename C>
void	PmergeMe::merge(C &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    std::vector<int> L(n1), R(n2);
    
    for (int i = 0; i < n1; ++i)
	{
        L[i] = arr[left + i];
    }
    
    for (int j = 0; j < n2; ++j)
	{
        R[j] = arr[mid + 1 + j];
    }
    
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2)
	{
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    
    while (i < n1)
	{
        arr[k++] = L[i++];
    }
    
    while (j < n2)
	{
        arr[k++] = R[j++];
    }
}

template void	PmergeMe::mergeInsertSort(std::list<int> &arr);
template void	PmergeMe::mergeInsertSort(std::vector<int> &arr);