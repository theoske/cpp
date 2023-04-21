/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:42 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/21 15:12:48 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : name("N/A"), is_signed(0), grade_to_sign(145), grade_to_exe(137)
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, std::string target) : name(name), is_signed(0), grade_to_sign(145), grade_to_exe(137)
{
	// std::string	file = target;
	
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	this->target = target;
	// file.append("_shrubbery");
	// std::ofstream outfile (file);
	// outfile << "0" << std::endl << "1" << std::endl;
	// outfile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &f) : name(f.name), is_signed(f.is_signed), grade_to_sign(f.grade_to_sign), grade_to_exe(f.grade_to_exe)
{
    *this = f;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
    (void) f;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

int	ShrubberyCreationForm::execute(Bureaucrat &executor) const
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
			std::string	file = this->target;

			file.append("_shrubbery");
			std::ofstream outfile (file);
			outfile << "0 0" << std::endl << "1 1" << std::endl;
			outfile.close();
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