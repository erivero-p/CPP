/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:36:57 by erivero-          #+#    #+#             */
/*   Updated: 2024/01/18 16:01:56 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <stdbool.h>


class	Contact{
	private:
		std::string	data[5];
	public:
		Contact(void);
		~Contact(void);
		int	add_contact(int field, std::string content);
	//	void print_contacts(Contact *contacts, int count);
		void display_contact(int i);
	//	void display_full_contact(void);

};

#endif
