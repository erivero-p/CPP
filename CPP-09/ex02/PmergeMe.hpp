/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:41:26 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/23 16:11:02 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <sys/time.h>
#include <climits>


class PmergeMe {
	private:
		std::vector<int> vt;
		std::deque<int> dq;
		long int	vtTime[2];
		long int	dqTime[2]; 
		PmergeMe(void);
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);
	public:
		PmergeMe(int ac, char **args);
		~PmergeMe(void);
		void 	parseInput(char **args, int ac, int *input);
		void	setVector(int *input);
		void	sortVector(void);
		void 	setNsortVector(int *input);

		void	setDeque(int *input);
		void	sortDeque(void);
		void 	setNsortDeque(int *input);

		void 	printResult(char **args);
};

#include "FordJohnson.tpp"