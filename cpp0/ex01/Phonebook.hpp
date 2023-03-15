/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:40:02 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/15 16:33:42 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define    PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
private:
    Contact contact[8];
public:
    Phonebook();
	~Phonebook();
	Phonebook&operator=(const Phonebook &f);
	Phonebook(const Phonebook &f);

    void    add_contact();//appel add
    void    search_contact();//appel detail
};

#endif
