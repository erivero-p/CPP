#ifndef  TEST_HPP
# define TEST_HPP
# include <iostream>
# include <string>
# include <stdbool.h>

class	Contact{
	private
		std::string	edad;
		std::string	apellido;
	public:
		Contact(void);
		~Contact(void);
		void	set_data(void);
};

class	PhoneBook{
	Contact	Paco;
	public:
	PhoneBook(void); //constructor
	~PhoneBook(void); //destructor
};

#endif