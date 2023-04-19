/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:14:57 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/19 16:12:36 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
	std::cout << "-------- CREATE BUREAUCRATS -------" << std::endl;
	Bureaucrat man1("Thierry", 80);
	Bureaucrat man2("Lucie", 20);
	Bureaucrat man3("Marie", 147);
	
	std::cout << "n1: " << man1.getName() << " Level : " << man1.getGrade() << std::endl;
	std::cout << "n2: " << man2.getName() << " Level : " << man2.getGrade() << std::endl;
	std::cout << "n3: " << man3.getName() << " Level : " << man3.getGrade() << std::endl;

	std::cout << "-------- CREATE FORMS -------" << std::endl;
	Form nbr1("ENGAGE", 120, 120);
	Form nbr2("SUSPEND", 50, 150);
	Form nbr3("FIRE", 5, 150);
	Form *nbr4;
	try
	{
		nbr4 = new Form("BAD", 151, 150);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
		nbr4 = NULL;
	}

	std::cout << "------ OPERATOR FORM -------" << std::endl;
	std::cout << nbr1 << std::endl;
	std::cout << nbr2 << std::endl;
	std::cout << nbr3 << std::endl;

	std::cout << "-------- SIGN FORM -------" << std::endl;
	nbr1.beSigned(&man1);
	nbr2.beSigned(&man1);
	nbr3.beSigned(&man1);
	std::cout << "---------------" << std::endl;
	nbr1.beSigned(&man2);
	nbr2.beSigned(&man2);
	nbr3.beSigned(&man2);
	std::cout << "---------------" << std::endl;
	nbr1.beSigned(&man3);
	nbr2.beSigned(&man3);
	nbr3.beSigned(&man3);

	std::cout << "------ INFO FORM -------" << std::endl;
	std::cout << nbr1 << std::endl;
	std::cout << nbr2 << std::endl;
	std::cout << nbr3 << std::endl;

	std::cout << "-------- OPERATOR << -------" << std::endl;
	std::cout << man1 << std::endl;
	std::cout << man2 << std::endl;
	std::cout << man3 << std::endl;
	std::cout << "----------------------------" << std::endl;

	return (0);
}
