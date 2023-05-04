/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:03:34 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 19:48:09 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>

class A;
class B;
class C;

class Base
{
	public:
		Base();
		virtual ~Base();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif