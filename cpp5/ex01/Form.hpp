/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:10:19 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/17 15:41:38 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
# define	FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const 	name;
	bool				is_signed;
	int const			grade_to_sign;
	int const			grade_to_exe;
public:
	Form(/* args */);
	Form(const std::string name, int grade_to_exe, int grade_to_sign);
	Form(const Form &f);
	Form&operator=(const Form &f);
	~Form();

	void	GradeTooLowException();
	void	GradeTooHighException();
};

#endif