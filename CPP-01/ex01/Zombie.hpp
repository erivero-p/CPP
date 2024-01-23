/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:13:22 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/23 13:13:49 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
	private:
		std::string	name;
	public:
	void	announce(void);
	void	namer(std::string name);
	Zombie(void);
	~Zombie(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif