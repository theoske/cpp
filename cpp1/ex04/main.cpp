/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:38:17 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/01/05 18:52:18 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <ostream>

int	main(int argc, char *argv[])
{
	std::string		filename;
	std::string		file2name;
	std::string 	s1;
	std::string		s2;

	if (argc != 4)
	{
		std::cout << "argument error" << std::endl;
		return 0;
	}
	filename = argv[1];
	file2name = filename;
	file2name.insert(file2name.length(), ".replace");
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream	myfile(filename);
	std::ofstream	file2(file2name);
	//copier jusqua occu s1
	//quand occu mettre s2
	myfile.close();
	file2.close();
	return (0);
}