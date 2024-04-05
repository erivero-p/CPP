/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:38:46 by erivero-          #+#    #+#             */
/*   Updated: 2024/04/05 12:38:59 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <stack>

template <typename T> 
class MutantStack : public std::stack<T>{
//private:
public:
	MutantStack(void);
	MutantStack(const MutantStack &src);
	MutantStack &operator=(const MutantStack &src);
	~MutantStack(void);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

#include "MutantStack.tpp"

/* #pragma once

# include <iostream>
# include <string>
# include <exception>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(void) {};
		MutantStack(const MutantStack &src): std::stack<T>(src){};
		MutantStack &operator=(const MutantStack &src){
			std::stack<T>::operator=(src);
			return (*this);
		};
		~MutantStack(){};
		iterator begin() {
			return (this->c.begin());
		};
		iterator end() {
			return (this->c.end());
		};
}; */