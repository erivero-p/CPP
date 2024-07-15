/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:59:21 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/15 13:04:58 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void) {

}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &src) : std::stack<T>(src) {

}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &src) {

	std::stack<T>::operator=(src);
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack(void) {

}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {

	 return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {

	return (this->c.end());
}