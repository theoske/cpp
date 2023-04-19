/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:45 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/19 18:02:46 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include "Form.hpp"
# include <fstream>

class Form;

class ShrubberyCreationForm : public Form
{
	private:
		std::string const 	name;
		bool				is_signed;
		int const			grade_to_sign;
		int const			grade_to_exe;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string name, std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &f);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &f);
		virtual ~ShrubberyCreationForm();
};

#endif