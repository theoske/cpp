/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:33:39 by theo              #+#    #+#             */
/*   Updated: 2023/02/09 17:39:43 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>
class Contact
{
	private :
		std::string firstname;
		std::string lastname;
		std::string	nickname;
		std::string number;
		std::string	secret;
	
	public :
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