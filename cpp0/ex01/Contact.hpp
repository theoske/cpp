/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:19:44 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/03/15 16:32:33 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define    CONTACT_HPP

# include <string>
# include <iomanip>
# include <iostream>

class Contact
{
private:
    std::string firstname;
	std::string lastname;
	std::string	nickname;
	std::string number;
	std::string	secret;

public:
    Contact();
    ~Contact();
    Contact(const Contact &f);
	Contact&operator=(const Contact &f);

    void    add();
    void    detail();
};

#endif
