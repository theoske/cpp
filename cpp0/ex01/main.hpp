/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:44:34 by theo              #+#    #+#             */
/*   Updated: 2023/02/09 17:35:36 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MAIN_H
# define MAIN_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"
# include "Phonebook.class.hpp"

void	print_input(std::string entry);
void	show_contact(Phonebook annuaire, int i);
void	ft_search(Phonebook annuaire, int i);

#endif