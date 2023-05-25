/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:31:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/25 15:10:41 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	ft_checker(char *argv)
{
	int i=0;

	while (argv[i])
	{
		if ((argv[i] < '0' || argv[i] > '9') && argv[i] != ' ')
		{
			std::cout << "Error: argument must only contain unsigned int: "<< argv[i] << std::endl;
			return (-1);
		}
		i++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	PmergeMe	pmm;
	int value;
	int i = 0;

	if (argc == 2)
	{
		if (ft_checker(argv[1]) == -1)
			return (-1);
		try
		{
			std::vector<int> arr;
			std::list<int> list;
			while (argv[1][i] != '\0')
			{
				value = 0;
				while (argv[1][i] && argv[1][i] != ' ')
				{
					value *= 10;
					value += static_cast<int>(argv[1][i] - 48);
					i++;
				}
				if (!argv[1][i])
					i--;
				if (argv[1][i])
				{
					std::cout << value << std::endl;
					arr.push_back(value);
					list.push_back(value);
					i++;
				}
			}
			struct timeval start, end;
			gettimeofday(&start, NULL);
			pmm.mergeInsertSort(arr);
			gettimeofday(&end, NULL);
			std::cout << "Vector sorting time: " << (end.tv_sec - start.tv_sec) * 1000000 + end.tv_usec - start.tv_usec << "usec" << std::endl;
			gettimeofday(&start, NULL);
			pmm.mergeInsertSort(list);
			gettimeofday(&end, NULL);
			std::cout << "List sorting time: " << (end.tv_sec - start.tv_sec) * 1000000 + end.tv_usec - start.tv_usec << "usec" << std::endl;
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