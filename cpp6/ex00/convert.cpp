/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:38:07 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/02 17:45:14 by tkempf-e         ###   ########.fr       */
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

	return (0);
}