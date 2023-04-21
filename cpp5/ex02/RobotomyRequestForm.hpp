/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:39 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/21 15:12:27 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBO_HPP
# define ROBO_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string const 	name;
		bool				is_signed;
		int const			grade_to_sign;
		int const			grade_to_exe;
		std::string			target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string name, std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &f);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &f);
		virtual ~RobotomyRequestForm();

		virtual int	execute(Bureaucrat &executor) const;
};

#endif