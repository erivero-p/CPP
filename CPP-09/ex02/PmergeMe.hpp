/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:41:26 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/20 15:53:39 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <deque>

//does it have to work with one argument between comillas?

class PmergeMe {
	private:
		std::vector<int> vt;
		std::deque<int> dq;
		PmergeMe(void);
	public:
		//static void inputChecker(std::string input);
		PmergeMe(char **args);
		PmergeMe(const PmergeMe &src);
		PmergeMe &operator=(const PmergeMe &src);
		~PmergeMe(void);

		void	setVector(char **arg);
		void	setDeque(char **arg);
		void	sortVector(void);
		void	sortDeque(void);
		void 	printResult(char **args);

};

#include "FordJohnson.tpp"