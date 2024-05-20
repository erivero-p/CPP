/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:30:21 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/20 16:00:07 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {

}

PmergeMe::PmergeMe(const PmergeMe &src) {

	(void)src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src) {

	(void)src;
	return (*this);
}

PmergeMe::~PmergeMe(void) {

}

PmergeMe::PmergeMe(char **args) {

	try {
		setVector(args);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	setDeque(args);
/* 	std::cout << "did I break something?" << std::endl;
	printContainer(vt); */
	sortVector();
	sortDeque();
	printResult(args);
}

void	PmergeMe::setVector(char **arg)
{
	char *endptr;
	long int	aux;

	for (int i = 1; arg[i] != NULL; i++)
	{
		aux = strtol(arg[i], &endptr, 10);
		if (endptr[0] != '\0' || aux < INT_MIN || aux > INT_MAX)
			throw std::runtime_error("Error: wrong input");
		vt.push_back(aux);
	}
}

void	PmergeMe::setDeque(char **arg)
{ 	//at this point, we know that the input is correct so we can use atoi
	for (int i = 1; arg[i] != NULL; i++)
	{
		dq.push_back(atoi(arg[i]));
	}
}

void PmergeMe::sortVector(void)
{
	fordJohnsonSort(vt.begin(), vt.end());
}
void PmergeMe::sortDeque(void)
{
	fordJohnsonSort(dq.begin(), dq.end());
}
void	printArgs(char **args) 
{
	for (int i = 1; args[i] != NULL; i++)
	{
		std::cout << args[i] << (args[i + 1] ? " " : "");
	}
	std::cout << std::endl;
}
void 	PmergeMe::printResult(char **args) 
{
	std::cout << "Before: ";
	printArgs(args);
	std::cout << "Vector After: ";
	printContainer(vt);
	std::cout << "Deque After: ";
	printContainer(dq);
}
