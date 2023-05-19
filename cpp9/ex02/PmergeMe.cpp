/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:32:20 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/19 17:32:13 by tkempf-e         ###   ########.fr       */
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

void	PmergeMe::mergeInsertionSort(std::vector<int> &arr, int left, int right)
{
	int n = arr.size();
	if (left < right)
	{
        if (right - left < 20)
		{
            // Tri par insertion
            for (int i = 1; i < n; ++i)
			{
				int key = arr[i];
				int j = i - 1;

        // Déplacer les éléments de la sous-séquence triée
        // qui sont plus grands que la clé vers la droite
			while (j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				--j;
			}

        // Insérer la clé à sa position correcte
        arr[j + 1] = key;
    		}
		}
		else
		{
			// Tri par fusion
			int mid = left + (right - left) / 2;
			mergeInsertionSort(arr, left, mid);
			mergeInsertionSort(arr, mid + 1, right);
			merge(arr, left, mid, right);
		}
	}
	for (unsigned long i = 0; i < arr.size(); ++i)
	{
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void	PmergeMe::merge(std::vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArr(n1);
    std::vector<int> rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}
