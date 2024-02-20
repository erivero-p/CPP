/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:12:02 by erivero-          #+#    #+#             */
/*   Updated: 2024/02/20 12:27:49 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	Ice ice;

	std::string tp = ice.getType();
	std::cout << tp << std::endl;

	Cure cure;
	std::cout << cure.getType() << std::endl;
}