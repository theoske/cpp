/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:33:43 by theo              #+#    #+#             */
/*   Updated: 2023/03/07 17:45:41 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>

class Phonebook
{
	private:

	public:
		Phonebook();
		~Phonebook();

		Phonebook&operator=(const Phonebook &f);
		Phonebook(const Phonebook &f);

		Contact	contact[8];
};

void	show_contact(Phonebook annuaire, int i);
void	ft_search(Phonebook annuaire, int i);

#endif