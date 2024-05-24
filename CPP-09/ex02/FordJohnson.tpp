/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FordJohnson.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:50:54 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/24 12:50:55 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

template <typename T>
void printContainer(const T &container) 
{
	for (typename T::const_iterator it = container.begin(); it != container.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename Iterator>
void insertionSort(Iterator left, Iterator right) 
{ // left + 1 cause we asume the first one is already sorted
	for (Iterator it = left + 1; it != right + 1; ++it) {
		int key = *it; // even if its a template, we now the content will be an int
		Iterator j = it;
		while (j > left && *(j - 1) > key) { //while the previous element is greater than the key
			*j = *(j - 1); //we keep moving the elements to the right
			--j;
		}
		*j = key;
	}
}

template <typename Iterator>
void merge(Iterator left, Iterator mid, Iterator right) {

	Iterator i = left, j = mid; //temporal iterators to go through the two halves
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

/* Ford Johnson Sort algorithm goes like:
1) sort the first half of a stack of numbers
2) sort recursively the second half
3) merge the two already sorted halves */

template <typename Iterator>
void fordJohnsonSort(Iterator left, Iterator right) {
    if (std::distance(left, right) > 0) {
        Iterator mid = left + std::distance(left, right) / 2;
        // Sort the first half using insertion sort
        insertionSort(left, mid);
        // Sort the second half recursively
        fordJohnsonSort(mid + 1, right);
        // Merge the two sorted halves
        merge(left, mid + 1, right);
    }
}
