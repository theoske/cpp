/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:10:19 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/26 18:40:29 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{

	public:

		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form const &src);
		virtual ~Form();

		Form &		operator=(Form const & rhs);

		std::string		getName() const;
		bool			getSigned() const;
		int				getGradeSign() const;
		int				getGradeExec() const;
		int				beSigned(Bureaucrat const &bureaucrat);
		void 			GradeTooHighException() const;
		void 			GradeTooLowException() const;
		void			FormNotSignedException() const;
		virtual int		execute(Bureaucrat const & executor) const;

	private:

		Form();
		std::string const	_name;
		bool				_signed;
		int const			_gradeSign;
		int const			_gradeExec;

};

std::ostream &	operator<<(std::ostream &o, Form const &rhs);

#endif