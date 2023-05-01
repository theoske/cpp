/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:14:57 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/01 19:13:01 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << "-------- CREATE BUREAUCRATS -------" << std::endl;
	Bureaucrat man1("Thierry", 150);
	Bureaucrat man2("Lucie", 143);
	Bureaucrat man3("Marie", 5);
	
	std::cout << "n1: " << man1.getName() << " Level : " << man1.getGrade() << std::endl;
	std::cout << "n2: " << man2.getName() << " Level : " << man2.getGrade() << std::endl;
	std::cout << "n3: " << man3.getName() << " Level : " << man3.getGrade() << std::endl;

	std::cout << "-------- CREATE FORMS -------" << std::endl;
	Form *nbr1 = new ShrubberyCreationForm("shrub");
	Form *nbr2 = new RobotomyRequestForm("robo");
	Form *nbr3 = new PresidentialPardonForm("joe");

	std::cout << "------ OPERATOR FORM -------" << std::endl;
	std::cout << *nbr1 << std::endl;
	std::cout << *nbr2 << std::endl;
	std::cout << *nbr3 << std::endl;

	std::cout << "-------- SIGN FORM -------" << std::endl;
	// nbr1->beSigned(&man1);
	// nbr2->beSigned(&man1);
	// nbr3->beSigned(&man1);
	
	// nbr1->beSigned(&man2);
	// nbr2->beSigned(&man2);
	// nbr3->beSigned(&man2);
	
	nbr1->beSigned(&man3);
	nbr2->beSigned(&man3);
	nbr3->beSigned(&man3);
	
	nbr1->execute(man1);
	nbr2->execute(man1);
	nbr3->execute(man1);
	nbr1->execute(man2);
	nbr2->execute(man2);
	nbr3->execute(man2);
	nbr1->execute(man3);
	nbr2->execute(man3);
	nbr3->execute(man3);

	std::cout << "------ INFO FORM -------" << std::endl;
	std::cout << *nbr1 << std::endl;
	std::cout << *nbr2 << std::endl;
	std::cout << *nbr3 << std::endl;

	std::cout << "-------- OPERATOR << -------" << std::endl;
	std::cout << man1 << std::endl;
	std::cout << man2 << std::endl;
	std::cout << man3 << std::endl;
	std::cout << "----------------------------" << std::endl;

	delete nbr1;
	delete nbr2;
	delete nbr3;
	return (0);
}
