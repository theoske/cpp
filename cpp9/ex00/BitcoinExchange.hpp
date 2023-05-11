/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:39:28 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/11 15:07:16 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <list>
# include <fstream>
# include <vector>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(char *argv);
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange	&operator=(BitcoinExchange const &src);

		void	get_data();
		// void	addTransaction(std::string const &date, float amount, std::string const &from, std::string const &to);
		// void	printTransactions(std::string const &name) const;
		// void	printWallet(std::string const &name) const;
		// void	printWallets() const;
		// void	printTransactions() const;
		// void	printPrices(std::string) const;

	private:
		std::list<std::string>		_wallets;
		std::list<std::string>		_transactions;
		std::ifstream	data;
		std::ifstream	input;
};

#endif