/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:41:26 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/21 16:19:13 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <sys/time.h>

class PmergeMe {
	private:
		std::vector<int> vt;
		std::deque<int> dq;
//		std::list<int> ls;
		PmergeMe(void);
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);
	public:
		PmergeMe(char **args);
		~PmergeMe(void);

		void	setVector(char **arg);
		void	setDeque(char **arg);
		void	setList(char **arg);
		void	sortVector(void);
		void	sortDeque(void);
//		void	sortList(void);
		void 	SortAndPrint(char **args);
};

#include "FordJohnson.tpp"