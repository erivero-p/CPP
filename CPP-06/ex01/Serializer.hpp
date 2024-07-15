/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:12:28 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:06:37 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Data.hpp"

class Serializer {
private:
	Serializer(void);
	Serializer(const Serializer &);
	Serializer &operator=(const Serializer &);
public:
	~Serializer(void);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};