/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:00:00 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/04 18:34:26 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include "data.hpp"

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
	// convert.convertChar();
	// convert.convertInt();
	// convert.convertFloat();
	// convert.convertDouble();

	Data* data = new Data();
	uintptr_t raw = serialize(data);
	Data* data2 = deserialize(raw);
	std::cout << "Data2: " << data2 << std::endl;
	std::cout << "Data: " << data << std::endl;
	// std::cout << "Data2: " << data2->getStr() << std::endl;
	// std::cout << "Data2: " << data2->getInt() << std::endl;
	// std::cout << "Data2: " << data2->getFloat() << std::endl;
	// std::cout << "Data2: " << data2->getDouble() << std::endl;
	return (0);
}