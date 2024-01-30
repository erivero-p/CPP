/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:36:58 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/30 12:02:52 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(std::string nm) : name(nm) {}
Harl::~Harl() {}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
int level_finder(std::string level)
{
	std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	for (i = 0; i < 4; i++)
	{
		if (level == lvls[i])
			return (i);
	}
	return (-1);
}
void Harl::complain(std::string level) 
{
	void	(Harl::*ftn[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i = level_finder(level);

		switch (i) {
			case 0:
				std::cout << "[ DEBUG ] " << std::endl;
				(this->*ftn[0])();
			case 1:
				std::cout << "[ INFO ] " << std::endl;
				(this->*ftn[1])();
			case 2:
				std::cout << "[ WARNING ] " << std::endl;
				(this->*ftn[2])();
			case 3:
				std::cout << "[ ERROR ] " << std::endl;
				(this->*ftn[3])();
				break ; //sin este break, se ejecuta el default
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

		}
}
