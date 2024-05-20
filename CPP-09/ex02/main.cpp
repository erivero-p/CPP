/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:05:55 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/20 15:52:36 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 3)
		std::cout << "Usage: ./PmergeMe one-number-per-argument" << std::endl;
	else
		PmergeMe	PmM(av);
}