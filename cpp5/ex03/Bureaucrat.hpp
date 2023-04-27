/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:12:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/26 18:25:08 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{

	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		Bureaucrat	&operator=(Bureaucrat const &rhs);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &form);
		void		executeForm(Form const &form);

		void GradeTooHighException() const;
		void GradeTooLowException() const;

	private:

		Bureaucrat(void);
		std::string const	_name;
		int					_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif