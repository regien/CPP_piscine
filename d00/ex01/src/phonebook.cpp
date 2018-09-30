#include <iostream>
#include <list>
#include "Phonebook.class.hpp"
#include <string>
#include <iomanip>

#define MAX_PAGES 8

char	err_mssg[] = "Valid Commands: ADD, SEARCH and EXIT";


void	init_classes(Phonebook vainas[])
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << "valor de vaina N" << i << " = " << vainas[i].taken << std::endl;
	}
}

int		available_space(Phonebook pages[])
{
	int		i;

	i = -1;
	while (++i < MAX_PAGES)
	{
		if(pages[i].taken == 0)
			return (i);
	}
	return (-1);
}

void	adding_someone(Phonebook pages[])
{
	int		index;

	if ((index = available_space(pages)) >= 0)
		pages[index].add_contact();
	else
		std::cout << "Pages at maximum capacity" << std::endl;
}

/*
void	Search_command(Phonebook pages[])
{
	if (pages)
}*/

int		main(void)
{
	Phonebook		contactos[8];
	std::string		line;

	init_classes(contactos);
	while(1)
	{
		std::cout << "Enter your Command: ";
		std::getline(std::cin, line);
		if(line == "ADD")
			adding_someone(contactos);
		else if (line == "SEARCH")
			;
		else if (line == "EXIT")
			return (0);
		else
			std::cerr << err_mssg << std::endl;
	}
}
