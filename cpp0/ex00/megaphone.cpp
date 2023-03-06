/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:32:14 by theo              #+#    #+#             */
/*   Updated: 2023/03/06 16:10:12 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

/*
	$>./megaphone "shhhhh... I think the students are asleep..."
	SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
	
	$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
	
	$>./megaphone
	* LOUD AND UNBEARABLE FEEDBACK NOISE *
*/

char	*megaphone(char *string)
{
	for (int i = 0; string[i]; i++)
		string[i] = toupper(string[i]);
	return (string);
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i=1; i < argc; i++)
		std::cout << megaphone(argv[i]);
	std::cout << std::endl;
	return 0;
}
