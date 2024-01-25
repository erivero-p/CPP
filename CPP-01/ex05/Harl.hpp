/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:37:07 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/25 16:11:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>

class Harl
{
	private:
	std::string name; //supongo?
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl(std::string name);
		~Harl();
		void complain(std::string level);
};