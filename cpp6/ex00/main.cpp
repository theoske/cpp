/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:00:00 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/15 15:06:46 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	arg_error(void)
{
	std::cout << "Usage: ./convert [literal]" << std::endl;
	return (-1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (arg_error());
	ScalarConverter::convert(argv[1]);
	return (0);
}