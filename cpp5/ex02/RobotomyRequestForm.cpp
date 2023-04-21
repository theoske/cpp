/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:36 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/21 15:12:19 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : name("N/A"), is_signed(0), grade_to_sign(72), grade_to_exe(45)
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, std::string target) : name(name), is_signed(0), grade_to_sign(72), grade_to_exe(45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &f) : name(f.name), is_signed(f.is_signed), grade_to_sign(f.grade_to_sign), grade_to_exe(f.grade_to_exe)
{
    *this = f;
}

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
    (void) f;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

int	RobotomyRequestForm::execute(Bureaucrat &executor) const
{
	static int	i = 0;
	
	try
	{
		if (this->is_signed != 1)
			throw(1);
		else if (this->getGradeExe() < executor.getGrade())
			throw(2);
		else
		{
			std::cout << "*bruit de perceuse*" << std::endl;
			if (i % 2)
				std::cout << "La target: " << this->target << " a ete robotomise" << std::endl;
			else
				std::cout << "La robotomie sur " << this->target << "a echoue" << std::endl;
			i++;
		}
	}
	catch(int error)
	{
		if (error == 2)
			std::cout << "Executor " << executor.getName() << " grade to low (" << executor.getGrade() << ") to execute Form " << this->name << " (" << this->grade_to_exe << ")" << std::endl;
		else if (error == 1)
			std::cout << "Form: " << this->name << " is not signed" << std::endl;
		return (-1);
	}
	return (0);
}