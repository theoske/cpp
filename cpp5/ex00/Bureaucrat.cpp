/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:12:08 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/02/17 15:12:22 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &f)
{
    *this = f;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &f)
{
    (void) f;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &f)
{
	os << f.getName() << ", bureaucrat grade " << f.getGrade() << std::endl;
	return os;
}