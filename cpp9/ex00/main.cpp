/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:39:25 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/10 17:17:59 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//main that takes a txt file as argument
//the txt file contains transactions
//the program will print the transactions for each wallet
//and the wallet for each transaction
//the program will also print all the transactions
//and all the wallets
int		main(int ac, char **av)
{
	BitcoinExchange		exchange;
	std::ifstream		file;
	std::string			line;
	std::string			date;
	float				amount;
	std::string			from;
	std::string			to;

	if (ac != 2)
	{
		std::cout << "Usage: ./bitcoin [file]" << std::endl;
		return (1);
	}
	file.open(av[1]);
	if (!file.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return (1);
	}
	while (std::getline(file, line))
	{
		date = line.substr(0, line.find(" "));
		line = line.substr(line.find(" ") + 1);
		amount = std::stof(line.substr(0, line.find(" ")));
		line = line.substr(line.find(" ") + 1);
		from = line.substr(0, line.find(" "));
		line = line.substr(line.find(" ") + 1);
		to = line.substr(0, line.find(" "));
		exchange.addTransaction(date, amount, from, to);
	}
	file.close();
	exchange.printTransactions();
	exchange.printWallets();
	return (0);
}
