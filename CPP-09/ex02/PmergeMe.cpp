/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:30:21 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:17:02 by erivero-         ###   ########.fr       */
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

PmergeMe::PmergeMe(int ac, char **args) {

	int	*input = new int[ac - 1];
	try {
		parseInput(args, ac, input);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	setNsortVector(input);
	setNsortDeque(input);
	printResult(args);
	delete[] input;
}

void	PmergeMe::setNsortVector(int *input) {

	struct timeval	time;

	gettimeofday(&time, NULL);
	this->vtTime[0]	= time.tv_usec;
	this->setVector(input);
	this->sortVector();
	gettimeofday(&time, NULL);
	this->vtTime[1]	= time.tv_usec;
}

void	PmergeMe::setNsortDeque(int *input) {

	struct timeval	time;

	gettimeofday(&time, NULL);
	this->dqTime[0]	= time.tv_usec;
	this->setDeque(input);
	this->sortDeque();
	gettimeofday(&time, NULL);
	this->dqTime[1]	= time.tv_usec;
}

void PmergeMe::parseInput(char **args, int ac, int *input) {

	char		*endptr;
	long int	aux;
	if (ac < 2)
		throw std::runtime_error("Error: no input");
	for (int i = 0; args[i] != NULL; i++)
	{
		aux = strtol(args[i], &endptr, 10);
		if (endptr[0] != '\0' || aux < INT_MIN || aux > INT_MAX)
			throw std::runtime_error("Error: wrong input");
		input[i] = aux;
	}
}

void	printArgs(char **args) {

	for (int i = 1; args[i] != NULL; i++)
	{
		std::cout << args[i] << (args[i + 1] ? " " : "");
	}
	std::cout << std::endl;
}

void 	PmergeMe::printResult(char **args) {

	std::cout << "Before: ";
	printArgs(args);
	std::cout << "After: ";
	printContainer(vt);
	std::cout << "time to process a range of "<< vt.size() << " elements with std::vector : " << vtTime[1] - vtTime[0] << " us." << std::endl;
	std::cout << "time to process a range of "<< dq.size() << " elements with std::deque : " <<  dqTime[1] - dqTime[0] << " us." << std::endl;
}

void	PmergeMe::setVector(int *input) {

	for (int i = 0; input[i]; i++)
		vt.push_back(input[i]);
}

void	PmergeMe::setDeque(int *input) {
 
	for (int i = 0; input[i]; i++)
		dq.push_back(input[i]);
}



void PmergeMe::sortVector(void)
{
	fordJohnsonSort(vt.begin(), vt.end());
}
void PmergeMe::sortDeque(void)
{
	fordJohnsonSort(dq.begin(), dq.end());
}
