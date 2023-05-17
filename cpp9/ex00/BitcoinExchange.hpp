/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:39:28 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/17 17:28:46 by tkempf-e         ###   ########.fr       */
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
# include <sstream>
# include <ctime>
# include <limits>

class BitcoinExchange
{
	public:
		BitcoinExchange(char *argv);
		BitcoinExchange(BitcoinExchange const &src);
		~BitcoinExchange();

		BitcoinExchange	&operator=(BitcoinExchange const &src);

		void	get_data();
		

	private:
		std::list<std::string>		_wallets;
		std::list<std::string>		_transactions;
		std::ifstream	data;
		std::ifstream	input;
};

std::string findClosestLowerDate(const std::map<std::string, std::string>& dateMap, const std::string& targetDate);
bool		isValidDate(std::string dateStr);
int			ft_check(std::string date, std::string value);
int			check_characters(std::string value);

#endif