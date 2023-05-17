/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkempf-e <tkempf-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:39:31 by tkempf-e          #+#    #+#             */
/*   Updated: 2023/05/17 17:39:24 by tkempf-e         ###   ########.fr       */
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
	std::map<std::string, std::vector<std::string> >	inputMap;
	std::map<std::string, std::string>					dataMap;
	std::map<std::string, std::string>::iterator		it2;
	std::vector<std::string>							values;
	std::string											value;
	std::string											date;

	while (std::getline(this->input, line))// mm date == mm index
		inputMap[line.substr(0, line.find(" "))].push_back(line.substr(line.find("| ") + 1));
	while (std::getline(this->data, line))
		dataMap[line.substr(0, line.find(","))] = line.substr(line.find(",") + 1);
	for (std::map<std::string, std::vector<std::string> >::iterator it = inputMap.begin(); it != inputMap.end(); ++it)
	{
		date = it->first;
		values = it->second;
		for (std::vector<std::string>::iterator itV = values.begin(); itV != values.end(); ++itV)
		{
			value = *itV;
			date = findClosestLowerDate(dataMap, date);
			it2 = dataMap.find(date);
			if (it2 != dataMap.end())
			{
				if (ft_check(date, value) == 0)
					std::cout << "Date: " << date << ", btc amount: " << value << ", btc values: " << std::stold(it2->second) << ", Result: " << std::stold(value) * std::stold(it2->second) << std::endl;
			}
		}
	}
}
std::string findClosestLowerDate(const std::map<std::string, std::string>& dataMap, const std::string& targetDate)
{
    time_t targetTime = time(nullptr);
    tm targetTm = *localtime(&targetTime);
    std::istringstream targetStream(targetDate);
    targetStream >> targetTm.tm_year;
    targetTm.tm_year -= 1900; // Adjust year to years since 1900
    targetStream.ignore(); // Ignore delimiter '-'
    targetStream >> targetTm.tm_mon;
    targetTm.tm_mon--; // Adjust month to range 0-11
    targetStream.ignore(); // Ignore delimiter '-'
    targetStream >> targetTm.tm_mday;
    targetTm.tm_hour = 0;
    targetTm.tm_min = 0;
    targetTm.tm_sec = 0;
    time_t targetTimestamp = mktime(&targetTm);

    std::string closestDate;
    time_t closestTimestamp = std::numeric_limits<time_t>::min();

    for (std::map<std::string, std::string>::const_iterator it = dataMap.begin(); it != dataMap.end(); ++it)
    {
        const std::string& date = it->first;

        if (isValidDate(date))
        {
            tm dateTm = *localtime(&targetTime);
            std::istringstream dateStream(date);
            dateStream >> dateTm.tm_year;
            dateTm.tm_year -= 1900; // Adjust year to years since 1900
            dateStream.ignore(); // Ignore delimiter '-'
            dateStream >> dateTm.tm_mon;
            dateTm.tm_mon--; // Adjust month to range 0-11
            dateStream.ignore(); // Ignore delimiter '-'
            dateStream >> dateTm.tm_mday;
            dateTm.tm_hour = 0;
            dateTm.tm_min = 0;
            dateTm.tm_sec = 0;
            time_t dateTimestamp = mktime(&dateTm);

            if (dateTimestamp < targetTimestamp && dateTimestamp > closestTimestamp)
            {
                closestDate = date;
                closestTimestamp = dateTimestamp;
            }
        }
    }

    return closestDate;
}

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool	isValidDate(std::string dateStr)
{
	int year, month, day;
    std::istringstream dateStream(dateStr);
    char delimiter;

    if (!(dateStream >> year >> delimiter >> month >> delimiter >> day))
        return false;

    if (delimiter != '-' || dateStream.rdbuf()->in_avail() != 0)
        return false;

    if (month < 1 || month > 12 || day < 1 || day > 31)
        return false;

    static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return day <= 29;
    else
        return day <= daysInMonth[month - 1];
}

//error: wrong date, no amount, 0 < amount < 1000
int	ft_check(std::string dateStr, std::string value)
{
	if (std::stold(value) > 1000 || std::stold(value) < 0 || value.length() == 0 || check_characters(value) == -1)
	{
		std::cout << "Error: wrong amount of btc (0 <= <int>amount <= 1000): " << value << std::endl;
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

int	check_characters(std::string values)
{
	for (unsigned long i = 0; i < values.length(); i++)
	{
		if ((values[i] < '0' || values[i] > '9') && values[i] != '.' && values[i] != ' ')
		{
			std::cout << "Error: wrong characters in amount of btc: " << values << std::endl;
			return (-1);
		}
	}
	return (0);
}