/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:34 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/27 17:08:28 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(std::string name, std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &operator=( PresidentialPardonForm const & rhs );

		virtual int	execute(Bureaucrat const & executor) const;
		std::string		getTarget(void) const;

	private:
		PresidentialPardonForm();
		std::string const	_target;
};

#endif