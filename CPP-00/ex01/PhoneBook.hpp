/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:53:59 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/19 15:17:15 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

 class PhoneBook{
	private:
	Contact	cont[8];
//	std::string	title[5];
	int	count;
	int	index;

	public:
	PhoneBook(void); //constructor
	~PhoneBook(void); //destructor
	void	pb_add(void);
	void	pb_search(void);
	void	pb_loop(void);
};

#endif
