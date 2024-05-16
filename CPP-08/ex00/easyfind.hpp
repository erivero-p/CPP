/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:39:56 by erivero-          #+#    #+#             */
/*   Updated: 2024/05/15 16:14:18 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

/**
 * @brief Searches for a specific value in a given container, and prints its position.
 *
 * @tparam T The type of the container. This is determined at compile time.
 * @param container The container to search in.
 * @param value The value to search for.
 * @return The position of the first occurrence of the value in the container.
 * @throw std::runtime_error If the value is not found in the container.
 */
template <typename T>
void	easyfind(const T &stack, int value);
template <typename T>
void	printStack(const T& stack);
#include "easyfind.tpp"