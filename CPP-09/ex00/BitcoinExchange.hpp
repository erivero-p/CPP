/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:08:09 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/24 12:27:39 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <map>

class BitcoinExchange {
private:
	std::map<time_t, double> dataBase;
//map container w/ time_t for the date, double for the value
public:
	BitcoinExchange(void);
	BitcoinExchange(std::string file);
	BitcoinExchange(const BitcoinExchange &src);
	BitcoinExchange &operator=(const BitcoinExchange &src);
	~BitcoinExchange(void);
	void	parseDatabase(void);
	double	parseLine(std::string line, int flag);
	void	parseFile(std::string infile);
	int		checkDate(std::tm date);
	void	displayOutput(std::tm date, double value);

/* 	class FileProblem : public std::exception {
		const char *what(int flag) const throw();
	} */
} ;