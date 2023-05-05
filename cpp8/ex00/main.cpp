/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:33:24 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/05 20:26:15 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::string	str = "Hello world";
	std::vector<int> nbr;

	nbr.push_back(10);
    nbr.push_back(20);
    nbr.push_back(30);
    nbr.push_back(40);
    nbr.push_back(50);

	int ret;
	
	ret = easyfind(str, 'r');
    std::cout << "Result for vec: " << ret << std::endl;

	ret = easyfind(nbr, 40);
    std::cout << "Result for lst: " << ret << std::endl;


    return 0;
}
