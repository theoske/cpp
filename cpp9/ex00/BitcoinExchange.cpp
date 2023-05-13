/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:39:31 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/13 15:38:36 by tkempf-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(char *argv)
{
	this->data.open("data.csv");
	this->input.open(argv);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) : _wallets(src._wallets), _transactions(src._transactions)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange()
{
	this->data.close();
	this->input.close();
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &src)
{
	this->_wallets = src._wallets;
	this->_transactions = src._transactions;
	return (*this);
}

void	BitcoinExchange::get_data()
{
	std::string											line;
	std::map<std::string, std::string>					inputMap;
	std::map<std::string, std::string>					dataMap;
	std::map<std::string, std::string>::const_iterator	it;
	std::map<std::string, std::string>::iterator		it2;
	std::string											value;
	std::string											date;
	
	while (std::getline(this->input, line))
		inputMap.insert(std::make_pair(line.substr(0, line.find(" ")), line.substr(line.find("| ") + 1)));
	while (std::getline(this->data, line))
		dataMap.insert(std::make_pair(line.substr(0, line.find(",")), line.substr(line.find(",") + 1)));
	for (std::map<std::string, std::string>::const_iterator it = inputMap.begin(); it != inputMap.end(); it++)
	{
		date = it->first;
		value = it->second;

		it2 = dataMap.find(date);
		if (it2 != dataMap.end())
		{
			long double value2 = std::stold(it2->second);
			long double multiplication = std::stold(value) * value2;
			if (ft_check(date, value) == 0)
				std::cout << "Date: " << date << ", btc amount: " << value << ", btc value: " << value2 << ", Multiplication: " << multiplication << std::endl;
		}
	}
}

//error: wrong date, no amount, 0 < amount < 1000
int	ft_check(std::string dateStr, std::string value)
{
	if (std::stold(value) > 1000 || std::stold(value) < 0 || value.length() == 0 || check_characters(value) == -1)
	{
		std::cout << "Error: wrong amount of btc (0 <= btc <= 1000): " << value << std::endl;
		return (-1);
	}
	
	std::istringstream dateStream(dateStr);
	std::tm date;
	dateStream >> std::get_time(&date, "%Y-%m-%d");
	if (dateStream.fail())
	{
		std::cout << "Error: wrong date format (YYYY-MM-DD): " << dateStr << std::endl;
		return (-1);
	}
	
	return (0);
}

int	check_characters(std::string value)
{
	for (unsigned long i = 0; i < value.length(); i++)
	{
		if ((value[i] < '0' || value[i] > '9') && value[i] != '.' && value[i] != ' ')
		{
			std::cout << "Error: wrong characters in amount of btc: " << value << std::endl;
			return (-1);
		}
	}
	return (0);
}