/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:12:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/21 13:56:12 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class	Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade; // de 150 a 1

	public:
		Bureaucrat(/* args */);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &f);
		Bureaucrat&operator=(const Bureaucrat &f);
		~Bureaucrat();
		
		void				GradeTooHighException();
		void				GradeTooLowException();
		const std::string	getName();
		int					getGrade();
		void				signForm(Form *f);

		void	operator++();
		void	operator--();

};

std::ostream&	operator<<(std::ostream &os, Bureaucrat &f);

#endif