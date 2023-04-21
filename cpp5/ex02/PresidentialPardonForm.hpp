/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:34 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/21 15:13:15 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENT_HPP
# define PRESIDENT_HPP

# include "Form.hpp"
# include <fstream>

class Form;

class PresidentialPardonForm : public Form
{
	private:
		std::string const 	name;
		bool				is_signed;
		int const			grade_to_sign;
		int const			grade_to_exe;
		std::string			target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string name, std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &f);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &f);
		virtual ~PresidentialPardonForm();

		virtual int	execute(Bureaucrat &executor) const;
};

#endif