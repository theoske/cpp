/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:39:31 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/10 17:18:05 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) : _wallets(src._wallets), _transactions(src._transactions)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &src)
{
	this->_wallets = src._wallets;
	this->_transactions = src._transactions;
	return (*this);
}

void	BitcoinExchange::addTransaction(std::string const &date, float amount, std::string const &from, std::string const &to)
{
	std::string	transaction;

	transaction = date + " " + std::to_string(amount) + " " + from + " " + to;
	this->_transactions.push_back(transaction);
	if (std::find(this->_wallets.begin(), this->_wallets.end(), from) == this->_wallets.end())
		this->_wallets.push_back(from);
	if (std::find(this->_wallets.begin(), this->_wallets.end(), to) == this->_wallets.end())
		this->_wallets.push_back(to);
}

void	BitcoinExchange::printTransactions(std::string const &name) const
{
	std::list<std::string>::const_iterator	it;
	std::string								transaction;
	std::string								date;
	std::string								amount;
	std::string								from;
	std::string								to;

	std::cout << "Transactions for " << name << ":" << std::endl;
	for (it = this->_transactions.begin(); it != this->_transactions.end(); it++)
	{
		transaction = *it;
		date = transaction.substr(0, transaction.find(" "));
		transaction = transaction.substr(transaction.find(" ") + 1);
		amount = transaction.substr(0, transaction.find(" "));
		transaction = transaction.substr(transaction.find(" ") + 1);
		from = transaction.substr(0, transaction.find(" "));
		transaction = transaction.substr(transaction.find(" ") + 1);
		to = transaction.substr(0, transaction.find(" "));
		if (from == name || to == name)
			std::cout << date << " " << amount << " " << from << " " << to << std::endl;
	}
}

void	BitcoinExchange::printWallet(std::string const &name) const
{
	std::list<std::string>::const_iterator	it;
	std::string								transaction;
	std::string								date;
	std::string								amount;
	std::string								from;
	std::string								to;
	float									balance;

	balance = 0;
	for (it = this->_transactions.begin(); it != this->_transactions.end(); it++)
	{
		transaction = *it;
		date = transaction.substr(0, transaction.find(" "));
		transaction = transaction.substr(transaction.find(" ") + 1);
		amount = transaction.substr(0, transaction.find(" "));
		transaction = transaction.substr(transaction.find(" ") + 1);
		from = transaction.substr(0, transaction.find(" "));
		transaction = transaction.substr(transaction.find(" ") + 1);
		to = transaction.substr(0, transaction.find(" "));
		if (from == name)
			balance -= std::stof(amount);
		if (to == name)
			balance += std::stof(amount);
	}
	std::cout << name << " has " << balance << " BTC" << std::endl;
}

void	BitcoinExchange::printTransactions() const
{
	std::list<std::string>::const_iterator	it;
	std::string								transaction;
	std::string								date;
	std::string								amount;
	std::string								from;
	std::string								to;

	std::cout << "Transactions:" << std::endl;
	for (it = this->_transactions.begin(); it != this->_transactions.end(); it++)
	{
		transaction = *it;
		date = transaction.substr(0, transaction.find(" "));
		transaction = transaction.substr(transaction.find(" ") + 1);
		amount = transaction.substr(0, transaction.find(" "));
		transaction = transaction.substr(transaction.find(" ") + 1);
		from = transaction.substr(0, transaction.find(" "));
		transaction = transaction.substr(transaction.find(" ") + 1);
		to = transaction.substr(0, transaction.find(" "));
		std::cout << date << " " << amount << " " << from << " " << to << std::endl;
	}
}

void	BitcoinExchange::printWallets() const
{
	std::list<std::string>::const_iterator	it;

	std::cout << "Wallets:" << std::endl;
	for (it = this->_wallets.begin(); it != this->_wallets.end(); it++)
		std::cout << *it << std::endl;
}

