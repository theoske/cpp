/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:10:19 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/01 18:48:29 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string 	name;
		bool			is_signed;
		int				grade_to_sign;
		int 			grade_to_exe;
	public:
		Form();
		Form(const std::string name, int grade_to_exe, int grade_to_sign);
		Form(const Form &f);
		Form&operator=(const Form &f);
		virtual ~Form();

		void			GradeTooLowException();
		void			GradeTooHighException();
		int				getGradeSign() const;
		int				getGradeExe() const;
		std::string		getName();
		bool			isSigned();
		void			beSigned(Bureaucrat *b);
		virtual int		execute(Bureaucrat &executor) = 0;
};

std::ostream &operator<<(std::ostream &os, Form &f);

#endif