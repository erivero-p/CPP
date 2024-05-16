/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:19:49 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/15 16:15:08 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
void easyfind(T& stack, int value) {

	typename T::iterator i; //the iterator will depend on the type
	i = std::find(stack.begin(), stack.end(), value);
	if (i == stack.end())
		throw std::runtime_error("Ocurrence not found");
	int pos = std::distance(stack.begin(), i) + 1;
	std::cout << "First ocurrence of " << value <<" found in position: " << pos << std::endl;
}
/* I'm using std::distance because some types of iterator cant be subtracted directly 
but for vectors i - begin  will work*/

template<typename T>
void printStack(const T& stack) {
	
	std::cout << "stack contains: ";
	for(typename T::const_iterator it = stack.begin(); it != stack.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
