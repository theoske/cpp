/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:31:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/23 15:03:07 by tkempf-e         ###   ########.fr       */
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
			std::list<int> list;
			for (int i = 0; argv[1][i] != '\0'; i++)
			{
				int value = static_cast<int>(argv[1][i]);
				arr.push_back(value);
				list.push_back(value);
			}
			struct timeval start, end;
			gettimeofday(&start, NULL);
			pmm.mergeInsertSort(arr);
			gettimeofday(&end, NULL);
			std::cout << "Vector: " << (end.tv_sec - start.tv_sec) * 1000000 + end.tv_usec - start.tv_usec << std::endl;
			gettimeofday(&start, NULL);
			pmm.mergeInsertSort(list);
			gettimeofday(&end, NULL);
			std::cout << "List: " << (end.tv_sec - start.tv_sec) * 1000000 + end.tv_usec - start.tv_usec << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Usage: ./PmergeMe [string of unsigned int]" << std::endl;
	return (0);
}