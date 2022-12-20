/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:32:14 by theo              #+#    #+#             */
/*   Updated: 2022/12/20 17:04:32 by theo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
	$>./megaphone "shhhhh... I think the students are asleep..."
	SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
	
	$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
	
	$>./megaphone
	* LOUD AND UNBEARABLE FEEDBACK NOISE *
*/

void	megaphone(char **argv)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (argv[i])
	{
		str = argv[i];
		j = 0;
		while (str[j])
		{
			if (str[j] > 96 && str[j] < 123)
				std::cout << (char)(str[j] - 32);
			else if (str[j] != '\"')
				std::cout << str[j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	megaphone(argv);
	return 0;
}
