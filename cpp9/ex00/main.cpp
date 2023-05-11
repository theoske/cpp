/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:39:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/11 14:58:28 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int		ft_arguments_error()
{
	std::cout << "Usage: ./btc [file]" << std::endl;
	return (-1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (ft_arguments_error());
	BitcoinExchange	exchange(argv[1]);
	exchange.get_data();
	// BitcoinExchange		exchange;
	// std::ifstream		file;
	// std::string			line;
	// std::string			date;
	// float				amount;
	// std::string			from;
	// std::string			to;

	// if (ac != 2)
	// {
	// 	std::cout << "Usage: ./bitcoin [file]" << std::endl;
	// 	return (1);
	// }
	// file.open(av[1]);
	// if (!file.is_open())
	// {
	// 	std::cout << "Error: could not open file" << std::endl;
	// 	return (1);
	// }
	// while (std::getline(file, line))
	// {
	// 	date = line.substr(0, line.find(" "));
	// 	line = line.substr(line.find(" ") + 1);
	// 	amount = std::stof(line.substr(0, line.find(" ")));
	// 	line = line.substr(line.find(" ") + 1);
	// 	from = line.substr(0, line.find(" "));
	// 	line = line.substr(line.find(" ") + 1);
	// 	to = line.substr(0, line.find(" "));
	// 	exchange.addTransaction(date, amount, from, to);
	// }
	// file.close();
	// exchange.printTransactions();
	// exchange.printWallets();
	return (0);
}
