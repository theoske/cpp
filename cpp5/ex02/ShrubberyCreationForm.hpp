/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:45 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/01 18:21:40 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &f);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &f);

		virtual int	execute(Bureaucrat &executor);

	private:
		std::string	_target;
};

#endif