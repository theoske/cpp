/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:32:20 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/23 13:27:04 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe const &src) : _arg(src._arg)
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe	&PmergeMe::operator=(PmergeMe const &src)
{
	this->_arg = src._arg;
	return (*this);
}

//separer en paires, les trier, les fusionner
//insertion sort si < 20

void PmergeMe::insertionSort(std::vector<int> &arr)
{
    int n = arr.size();

    for (int i = 1; i < n; ++i)
	{
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key)
		{
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void PmergeMe::mergeSort(std::vector<int>& arr, int left, int right)
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

void	PmergeMe::mergeInsertSort(char *argv1)
{
	std::string str(argv1);
	std::stringstream ss(str);
	std::string token;
	std::vector<int> arr;

	while (std::getline(ss, token, ' '))
	{
		int value = std::stoi(token);
		arr.push_back(value);
	}
	if (arr.size() <= 20)
		insertionSort(arr);
	else
		mergeSort(arr, 0, arr.size() - 1);
	for (unsigned long int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::merge(std::vector<int> &arr, int left, int mid, int right)
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
