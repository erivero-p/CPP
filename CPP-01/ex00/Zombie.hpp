/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:34:16 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/22 16:10:19 by erivero-         ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void randomChump(std::string name);


#endif