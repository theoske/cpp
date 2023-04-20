/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:17:36 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/04/20 15:30:23 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : name("N/A"), is_signed(0), grade_to_sign(72), grade_to_exe(45)
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}