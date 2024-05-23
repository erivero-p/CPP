/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:30:21 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/23 15:12:53 by erivero-         ###   ########.fr       */
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

	struct timeval	time;
	try {
		gettimeofday(&time, NULL);
		this->vtTime[0]	= time.tv_usec;
		setVector(args);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	sortVector();
	gettimeofday(&time, NULL);
	this->vtTime[1] = time.tv_usec;
	gettimeofday(&time, NULL);
	this->dqTime[0] = time.tv_usec;	
	setDeque(args);
	sortDeque();
	gettimeofday(&time, NULL);
	this->dqTime[1] = time.tv_usec;
	SortAndPrint(args);
}

void	printArgs(char **args) 
{
	for (int i = 1; args[i] != NULL; i++)
	{
		std::cout << args[i] << (args[i + 1] ? " " : "");
	}
	std::cout << std::endl;
}

void 	PmergeMe::SortAndPrint(char **args) 
{
/* 	struct timeval	start, end;

	//Vector
	gettimeofday(&start, NULL);
	sortVector();
	gettimeofday(&end, NULL);
	long timerVector = end.tv_usec - start.tv_usec;
	//Deque
	gettimeofday(&start, NULL);
	sortDeque();
	gettimeofday(&end, NULL);
	long timerDeque = end.tv_usec - start.tv_usec;
 */
	std::cout << "Before: ";
	printArgs(args);
	std::cout << "After: ";
	printContainer(vt);
	std::cout << "time to process a range of "<< vt.size() << " elements with std::vector : " << vtTime[1] - vtTime[0] << " us." << std::endl;
	std::cout << "time to process a range of "<< dq.size() << " elements with std::deque : " <<  dqTime[1] - dqTime[0] << " us." << std::endl;
//	std::cout << "time to process a range of "<< dq.size() << " elements with std::list : " <<  timerList << " us." << std::endl;

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
