#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

template <typename T>
void printContainer(const T &container) {
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
		while (j > left && *(j - 1) > key) {
			*j = *(j - 1);
			--j;
		}
		*j = key;
	}
}

template <typename Iterator>
void merge(Iterator left, Iterator mid, Iterator right) {
	typedef typename std::iterator_traits<Iterator>::value_type T;
	std::vector<T> temp(right - left);

	Iterator i = left, j = mid;
	typename std::vector<T>::size_type k = 0;

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

	while (i < mid) {
		temp[k] = *i;
		++i;
		++k;
	}

	while (j < right) {
		temp[k] = *j;
		++j;
		++k;
	}

	for (i = left, k = 0; i < right; ++i, ++k) {
		*i = temp[k];
	}
}
template <typename Iterator>
void fordJohnsonSort(Iterator left, Iterator right) {
    if (std::distance(left, right) > 0) {
        Iterator mid = left + std::distance(left, right) / 2;
        // Sort the first half using insertion sort
		std::cout << "apparently im trying to sort from " << *left << " to " << *mid << std::endl;
        insertionSort(left, mid);
		std::cout << "after sorting: ";
		printContainer(std::vector<int>(left, mid + 1));
        // Sort the second half recursively
        fordJohnsonSort(mid + 1, right);

        // Merge the two sorted halves
        merge(left, mid + 1, right);
    }
}
