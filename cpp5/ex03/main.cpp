/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:14:57 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/27 16:13:47 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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
	Form *nbr1 = new ShrubberyCreationForm("Tree1");
	Form *nbr2 = new RobotomyRequestForm("Roboture");
	Form *nbr3 = new PresidentialPardonForm("Slartibartfast");

	std::cout << "------ OPERATOR FORM -------" << std::endl;
	std::cout << *nbr1 << std::endl;
	std::cout << *nbr2 << std::endl;
	std::cout << *nbr3 << std::endl;

	std::cout << "-------- SIGN FORM -------" << std::endl;
	// man1.signForm(*nbr1);
	// man1.signForm(*nbr2);
	// man1.signForm(*nbr3);
	// man1.executeForm(*nbr1);
	// man1.executeForm(*nbr2);
	// man1.executeForm(*nbr3);
	// man2.executeForm(*nbr1);
	// man2.executeForm(*nbr2);
	// man2.executeForm(*nbr3);
	// man3.executeForm(*nbr1);
	// man3.executeForm(*nbr2);
	// man3.executeForm(*nbr3);
	
	// std::cout << "---------------" << std::endl;
	// man2.signForm(*nbr1);
	// man2.signForm(*nbr2);
	// man2.signForm(*nbr3);

	// man1.executeForm(*nbr1);
	// man1.executeForm(*nbr2);
	// man1.executeForm(*nbr3);
	// man2.executeForm(*nbr1);
	// man2.executeForm(*nbr2);
	// man2.executeForm(*nbr3);
	// man3.executeForm(*nbr1);
	// man3.executeForm(*nbr2);
	// man3.executeForm(*nbr3);

	// std::cout << "---------------" << std::endl;
	// man3.signForm(*nbr1);
	// man3.signForm(*nbr2);
	// man3.signForm(*nbr3);
	// man1.executeForm(*nbr1);
	// man1.executeForm(*nbr2);
	// man1.executeForm(*nbr3);
	// man2.executeForm(*nbr1);
	// man2.executeForm(*nbr2);
	// man2.executeForm(*nbr3);
	// man3.executeForm(*nbr1);
	// man3.executeForm(*nbr2);
	// man3.executeForm(*nbr3);

	std::cout << "-------- INTERN -------" << std::endl;
	Intern intern;
	Form	*rrf;
	
	rrf = intern.makeForm("robotomy request", "Bender");

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
