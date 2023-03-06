/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:33:39 by theo              #+#    #+#             */
/*   Updated: 2023/03/06 16:52:00 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include "Phonebook.hpp"

class Contact
{
	private :
		std::string firstname;
		std::string lastname;
		std::string	nickname;
		std::string number;
		std::string	secret;
	
	public :
		Contact();
		~Contact();
		Contact(const Contact &f);
		Contact&operator=(const Contact &f);
		
		void	add_first(void);
		void	add_last(void);
		void	add_nick(void);
		void	add_number(void);
		void	add_secret(void);
		void	print_details(void);
		void	ft_search2(void);
		int		is_empty(void);
};

#endif