/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:07:36 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 19:44:09 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int	main(void)
{
	Base	*base = generate();
	identify(base);
	identify(*base);
	return (0);
}