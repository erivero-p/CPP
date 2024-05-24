/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:30:21 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/24 14:48:30 by erivero-         ###   ########.fr       */
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

void PmergeMe::parseInput(char **args, int ac, int *input) 
{
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

void	printArgs(char **args) 
{
	for (int i = 1; args[i] != NULL; i++)
	{
		std::cout << args[i] << (args[i + 1] ? " " : "\n");
	}
}


void printVector(std::vector<int> &vt) 
{
	for (std::vector<int>::const_iterator it = vt.begin(); it != vt.end(); ++it) 
	{
		std::cout << *it << ((it + 1 != vt.end()) ? " " : "\n");
	}
}

void 	PmergeMe::printResult(char **args) 
{
	std::cout << "Before: ";
	printArgs(args);
	std::cout << "After: ";
	printVector(vt);
	std::cout << "time to process a range of "<< vt.size() << " elements with std::vector : " << vtTime[1] - vtTime[0] << " us." << std::endl;
	std::cout << "time to process a range of "<< dq.size() << " elements with std::deque : " <<  dqTime[1] - dqTime[0] << " us." << std::endl;
}

void	PmergeMe::setVector(int *input)
{
	for (int i = 0; input[i]; i++)
		vt.push_back(input[i]);
}

void	PmergeMe::setDeque(int *input)
{ 
	for (int i = 0; input[i]; i++)
		dq.push_back(input[i]);
}

void insertionSortVector(std::vector<int>::iterator left, std::vector<int>::iterator right) 
{
	for (std::vector<int>::iterator it = left + 1; it != right + 1; ++it) {
		int key = *it; // even if its a template, we now the content will be an int
		std::vector<int>::iterator j = it;
		while (j > left && *(j - 1) > key) { //while the previous element is greater than the key
			*j = *(j - 1); //we keep moving the elements to the right
			--j;
		}
		*j = key;
	}
}

void mergeVector(std::vector<int>::iterator left, std::vector<int>::iterator mid, std::vector<int>::iterator right) 
{
	std::vector<int>::iterator i = left, j = mid; //temporal iterators to go through the two halves
	std::vector<int> temp(right - left); // temporal vector to storage the sorted elements
	std::vector<int>::size_type k = 0;

//loop to store in temp always the minor element of the two halves
	while (i < mid && j < right) { 
		if (*i <= *j) {
			temp[k] = *i;
			++i;
		} else {
			temp[k] = *j;
			++j;
		}
		++k;
	}
//if there are still elements in the first half
	while (i < mid) { 
		temp[k] = *i;
		++i;
		++k;
	}
//if there are still elements in the second half
	while (j < right) { 
		temp[k] = *j;
		++j;
		++k;
	}
// final loop to copy the sorted elements from temp to the original container
	for (i = left, k = 0; i < right; ++i, ++k) {
		*i = temp[k];
	}
}

void fordJohnsonSortVector(std::vector<int>::iterator left, std::vector<int>::iterator right) 
{
    if (std::distance(left, right) > 0) {
        std::vector<int>::iterator mid = left + std::distance(left, right) / 2;
        insertionSortVector(left, mid);
        fordJohnsonSortVector(mid + 1, right);
        mergeVector(left, mid + 1, right);
    }
}

void PmergeMe::sortVector(void)
{
	fordJohnsonSortVector(vt.begin(), vt.end());
}

void insertionSortDeque(std::deque<int>::iterator left, std::deque<int>::iterator right) 
{
	for (std::deque<int>::iterator it = left + 1; it != right + 1; ++it) {
		int key = *it; // even if its a template, we now the content will be an int
		std::deque<int>::iterator j = it;
		while (j > left && *(j - 1) > key) { //while the previous element is greater than the key
			*j = *(j - 1); //we keep moving the elements to the right
			--j;
		}
		*j = key;
	}
}

void mergeDeque(std::deque<int>::iterator left, std::deque<int>::iterator mid, std::deque<int>::iterator right) 
{
	std::deque<int>::iterator i = left, j = mid; //temporal iterators to go through the two halves
	std::vector<int> temp(right - left); // temporal vector to storage the sorted elements
	std::vector<int>::size_type k = 0;

//loop to store in temp always the minor element of the two halves
	while (i < mid && j < right) { 
		if (*i <= *j) {
			temp[k] = *i;
			++i;
		} else {
			temp[k] = *j;
			++j;
		}
		++k;
	}
//if there are still elements in the first half
	while (i < mid) { 
		temp[k] = *i;
		++i;
		++k;
	}
//if there are still elements in the second half
	while (j < right) { 
		temp[k] = *j;
		++j;
		++k;
	}
// final loop to copy the sorted elements from temp to the original container
	for (i = left, k = 0; i < right; ++i, ++k) {
		*i = temp[k];
	}
}

void	fordJohnsonSortDeque(std::deque<int>::iterator left, std::deque<int>::iterator right) 
{
	if (std::distance(left, right) > 0) {
		std::deque<int>::iterator mid = left + std::distance(left, right) / 2;
		insertionSortDeque(left, mid);
		fordJohnsonSortDeque(mid + 1, right);
		mergeDeque(left, mid + 1, right);
	}
}

void PmergeMe::sortDeque(void)
{
	fordJohnsonSortDeque(dq.begin(), dq.end());
}
