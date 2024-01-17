/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:53:59 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/17 15:36:57 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <stdbool.h>


class	Contact{
	private:
		std::string	data[5];
//		std::string	title[5];
	public:
		Contact(void);
		~Contact(void);
		int	add_contact(Contact cont, int field, std::string content);
};

class PhoneBook{
	private:
	Contact	cont[8];
	std::string	title[5];

	public:
	PhoneBook(void); //constructor
	~PhoneBook(void); //destructor
	void	pb_add(PhoneBook aw);
};

#endif
