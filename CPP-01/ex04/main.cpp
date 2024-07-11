/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:07:39 by erivero-          #+#    #+#             */
/*   Updated: 2024/07/11 17:01:59 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

int	parse(int ac, char **av)
{
	std::cout << "\033[0;31m";
	if (ac != 4)
		std::cout << "Please, input three arguments\n";
	else
	{
		std::ifstream infile(av[1]);
		if (!infile.is_open())
			std::cout << "Error while opening file\n";
		else if (std::string(av[2]).empty())
			std::cout << "String to replace cannot be empty\n";
		else if (std::string(av[2]) == std::string(av[3]))
			std::cout << "Strings cannot be the same\n";
		else
		{
			std::cout << "\033[0";
			return (0);
		}
	}
	std::cout << "\033[0";
	return (1);
}
// Passing infile and outfile directly as arguments implies a copy operation, which
// is not allowed for this type of files. It is solved by passing them by reference.

void	replacer(std::ifstream& infile, std::ofstream& outfile, std::string src, std::string	dst)
{
	std::string	line;
	std::size_t	i;

	while (std::getline(infile, line))
	{
		i = line.find(src);
		while (i != std::string::npos) //npos is the return value if find does not find the string
		{
			line.erase(i, src.length());
			line.insert(i, dst);
			i = line.find(src); // in case there's more than one ocurrence
		}
		outfile << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (parse(ac, av))
		return (1);
	std::ifstream infile; 
	std::ofstream outfile;
	infile.open(av[1]);
	outfile.open(std::string(av[1]) + ".replace");
	replacer(infile, outfile, std::string(av[2]), std::string(av[3]));
	infile.close();
	outfile.close();
}
