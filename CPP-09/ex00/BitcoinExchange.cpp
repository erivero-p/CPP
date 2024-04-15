/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:47:04 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/15 14:13:14 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string infile)
{
	this->parseDatabase();
	this->parseFile(infile);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	this->dataBase = src.dataBase;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
	if (this != &src)
		*this = src;
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::parseDatabase(void)
{
	std::ifstream csv("data.csv");
	std::string	line = "";
	std::tm	date; //a structure to save dates
	double	value;

	if (!csv.is_open())
		throw(std::runtime_error("Error while opening data.csv file"));
	getline(csv, line); //a first call just to skip the first line
	while (getline(csv, line))
	{
		value = parseLine(line, 1);
		if (value < 0) 
			throw(std::runtime_error("Data base may have a format error"));
		date.tm_year = atoi(line.substr(0,4).c_str()) - 1900;
		date.tm_mon = atoi(line.substr(5,2).c_str()) - 1;
		date.tm_mday = atoi(line.substr(8,2).c_str());
		date.tm_isdst = 0;
		date.tm_hour = 0;
		date.tm_min = 0;
		date.tm_sec = 0;
		this->dataBase.insert(std::pair<time_t, double>(mktime(&date), value));
	}
}
/* maps are associative containers, they will take two types of data and associate then together,
to "pack" data and value in this case, for inserting them in the map, we use the std::pair template 
the mktime function will convert the tm structure in a time_t variable */


double	BitcoinExchange::parseLine(std::string line, int flag)
{
	unsigned long i = 0;
/* flag will be 1 to parse the "2012-02-04,5.99" format and 2 to parse the "2011-01-03 | 1.2" format */
	while (i < line.size() && std::isdigit(line[i]))
		i++;
	if (i >= line.size() || i != 4 || line[i++] != '-')
		return (-1);
	while (i < line.size() && std::isdigit(line[i]))
		i++;
	if (i >= line.size() || i != 7 || line[i++] != '-')
		return (-1);
	while (i < line.size() && std::isdigit(line[i]))
		i++;
	if (i >= line.size() || i != 10 || (flag == 1 && line[i] != ','))
		return (-1);
	if (flag == 2 && i + 2 >= line.size() && (line[i] != ' ' || line[i + 1] != '|' || line[i + 2] != ' '))
		return (-1);
	i += (flag == 1 ? 1 : 3);
	if (i >= line.size())
		return (-1);
	char *endPtr;
	std::string valueStr = line.substr(i);
	double value = strtod(valueStr.c_str(), &endPtr);
	if (*endPtr != 0)
		return (-1);
	if (flag == 2 && (value < 0 || value > 1000))
		return (-42);
	return (value);
}

void	BitcoinExchange::parseFile(std::string infile)
{
	std::ifstream file(infile);
	std::string	line = "";
	std::tm	date;
	double	value;

	if (!file.is_open())
		throw(std::runtime_error("Error while opening infile"));
	getline(file, line);
	while (getline(file, line))
	{
		value = parseLine(line, 2);
		if (value == -1)
			std::cout << "\033[0;31mError: Bad imput => " << line << "\033[0;0m\n";
		else if (value == -42)
			std::cout << "\033[0;31mError: BitCoin value on infile is out of bounds\033[0;0m" << std::endl;
		else {
			date.tm_year = atoi(line.substr(0,4).c_str()) - 1900;
			date.tm_mon = atoi(line.substr(5,2).c_str()) - 1;
			date.tm_mday = atoi(line.substr(8,2).c_str());
			date.tm_isdst = 0;
			date.tm_hour = 0;
			date.tm_min = 0;
			date.tm_sec = 0;
			if (checkDate(date))
				std::cout << "\033[0;31mError: Non existing date\033[0;0m" << std::endl;
			else
				displayOutput(date, value);
		}
	}
}

void BitcoinExchange::displayOutput(std::tm date, double value)
{
	std::map<time_t, double>::iterator it = dataBase.begin();
	time_t time = mktime(&date);
	if (time < it->first)
	{
		std::cout << "\033[0;31mError: date too old to have stored data\033[0;0m\n";
		return ;
	}
	while (time >= it->first)
		it++;
	if (it != dataBase.begin())
		it--;
	std::cout << date.tm_year + 1900 << "-";
	if (date.tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << date.tm_mon + 1 << "-";
	if (date.tm_mday < 10)
		std::cout << "0";
	std::cout << date.tm_mday << " => " << value << " = " << value * it->second << std::endl;
}

int	BitcoinExchange::checkDate(std::tm date)
{
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (date.tm_mon + 1 < 1 || date.tm_mon + 1 > 12)
		return (1);
	if (((date.tm_year % 4 == 0) && (date.tm_year % 100 != 0)) || (date.tm_year % 400 == 0)) 
		days[1]++; // if it's a lap year, we add a day to February
	if (date.tm_mday < 1 || date.tm_mday > days[date.tm_mon])
		return (1);
	return (0);
}