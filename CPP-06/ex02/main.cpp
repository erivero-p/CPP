/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:28:54 by erivero-          #+#    #+#             */
/*   Updated: 2024/03/26 17:26:51 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Base.hpp"
#include <ctime>
#include "inc/A.hpp"
#include "inc/B.hpp"
#include "inc/C.hpp"


Base *generate(void) {

	switch (std::rand() % 3) 
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (NULL);
	}
}

void identify(Base* p) {
 
	if (dynamic_cast<A *>(p)) //if dynamic_cast fails it will be NULL
		std::cout << "class type is: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "class type is: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "class type is: C" << std::endl;
	else
		std::cout << "Unknown class type" << std::endl;
}

void identify(Base &p) {
//references can't be NULL, in this case, if the cast fails, 
//it will trhrow an exeption
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
 		std::cout << "class type is: A" << std::endl;
	}
	catch(std::exception &e) {
		try {
			B &b = dynamic_cast<B &>(p);
			(void)b;
 			std::cout << "class type is: B" << std::endl;
		}
		catch(std::exception &e) {
			try {
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "class type is: C" << std::endl;
			}
			catch(std::exception &e) {
				std::cout << "Unknown class type" << std::endl;
			}
		}
	}
}

int	main (void)
{
	Base *unk;

	std::srand(std::time(NULL));
	unk = generate();
	identify(unk);
	identify(*unk);
	return (0);
}