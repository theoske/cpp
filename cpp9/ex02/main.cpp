/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:31:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/19 17:15:38 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe	pmm;

	if (argc == 2)
	{
		try
		{
			std::vector<int> arr;

			for (int i = 0; argv[1][i] != '\0'; i++)
			{
				int value = static_cast<int>(argv[1][i]);
				arr.push_back(value);
			}
			pmm.mergeInsertionSort(arr, 0, arr.size() - 1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Usage: ./PmergeMe [file]" << std::endl;
	return (0);
}