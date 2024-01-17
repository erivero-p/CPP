#include "test.hpp"

void Contact::set_data(void)
{
	edad = "42";
	apellido = "Perez";
}

int	main(void)
{
	PhoneBook agenda;

	agenda.Paco.set_data();
}