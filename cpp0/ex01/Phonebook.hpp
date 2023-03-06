/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:33:43 by theo              #+#    #+#             */
/*   Updated: 2023/03/06 16:13:47 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

void	print_input(std::string entry);
void	show_contact(Phonebook annuaire, int i);
void	ft_search(Phonebook annuaire, int i);

class Phonebook
{
	public:
		Contact		contact[8];
};

#endif