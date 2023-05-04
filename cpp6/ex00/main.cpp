/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:00:00 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 17:32:25 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	arg_error(void)
{
	std::cout << "Error: wrong number of arguments" << std::endl;
	return (-1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (arg_error());
	Convert convert(argv[1]);
	convert.convertChar();
	convert.convertInt();
	convert.convertFloat();
	convert.convertDouble();
	return (0);
}