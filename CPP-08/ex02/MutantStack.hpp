/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:38:46 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/16 16:31:11 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <stack>

template <typename T> 
class MutantStack : public std::stack<T>{
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

/* std::stack is a container adapter, which implies that it has an underlaying container that
can be any of the standard containers. So what we're doing is accessing at the iterator of 
the underlaying container so to use it */