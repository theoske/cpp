/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:12:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/28 17:41:01 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		std::string	name;
		int			grade;

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

		void	operator++();
		void	operator--();

};

std::ostream&	operator<<(std::ostream &os, Bureaucrat &f);

#endif