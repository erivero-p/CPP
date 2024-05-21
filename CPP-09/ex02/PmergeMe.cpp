/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:30:21 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/21 16:19:26 by erivero-         ###   ########.fr       */
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
	
	sortVector();
	sortDeque();
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
	struct timeval	start, end;

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
/* 	//List
	gettimeofday(&start, NULL);
	sortList();
	gettimeofday(&end, NULL);
	long timerList = end.tv_usec - start.tv_usec; */

	std::cout << "Before: ";
	printArgs(args);
	std::cout << "After: ";
	printContainer(vt);
	std::cout << "time to process a range of "<< vt.size() << " elements with std::vector : " << timerVector << " us." << std::endl;
	std::cout << "time to process a range of "<< dq.size() << " elements with std::deque : " <<  timerDeque << " us." << std::endl;
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

/* void PmergeMe::setList(char **arg)
{
	for (int i = 1; arg[i] != NULL; i++)
	{
		ls.push_back(atoi(arg[i]));
	}
} */

void PmergeMe::sortVector(void)
{
	fordJohnsonSort(vt.begin(), vt.end());
}
void PmergeMe::sortDeque(void)
{
	fordJohnsonSort(dq.begin(), dq.end());
}
/* void PmergeMe::sortList(void)
{
	fordJohnsonSort(ls.begin(), ls.end());
}
 */