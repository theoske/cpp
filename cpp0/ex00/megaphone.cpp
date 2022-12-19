/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: theo <theo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:32:14 by theo              #+#    #+#             */
/*   Updated: 2022/12/19 17:55:05 by theo             ###   ########.fr       */
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
	
	$>
*/

void	upgrade(int argc, char **argv)
{
	
}

int main(int argc, char *argv[])
{
	if (argc > 2)
		upgrade(argc, argv);
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	return 0;
}