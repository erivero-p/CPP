/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:28:40 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/26 14:10:53 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Data {
private:
	std::string	name;
public:	
	Data();
	Data(const Data &src);
	Data &operator=(const Data &src);
	~Data();
} ;