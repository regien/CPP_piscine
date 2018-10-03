#include <iostream>
#include <list>
#include "Phonebook.hpp"
#include <string>
#include <iomanip>

#define MAX_PAGES 8

char	err_mssg[] = "Valid Commands: ADD, SEARCH and EXIT";

void			print_width(std::string str)
{
	if (str.size() <= 10)
		std::cout << std::setfill(' ') << std::setw(10) << str;
	else
		std::cout << str.substr(0, 9) << ".";
}

void			print_search_string(Phonebook iter, int index)
{
	std::cout << std::setfill(' ') << std::setw(10) << (index + 1) << "|";
	print_width(iter.first_name);
	std::cout << "|";
	print_width(iter.last_name);
	std::cout << "|";
	print_width(iter.nickname);
	std::cout << std::endl;
}

int		available_space(Phonebook pages[])
{
	int		i;

	i = -1;
	while (++i < MAX_PAGES)
		if(pages[i].taken == 0)
			return (i);
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


void	Search_command(Phonebook pages[])
{
	int				i;
	int				e;
	std::string		buffer;

	i = -1;
	e = 0;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (++i < MAX_PAGES)
		if (pages[i].taken != 0)
			print_search_string(pages[i], i);
	std::cout << "Enter the index you want to look for: ";
	std::getline(std::cin, buffer);
	std::remove(buffer.begin(), buffer.end(), ' ');
	if (buffer.size() > 6 || buffer == "")
	{
		std::cout << "invalid index or empty" << std::endl;
		return ;
	}
	e = std::stoi(buffer);
	if (e == 0)
		std::cerr << "invalid index or empty" << std::endl;
	if (e >= 1 && e <= 8)
		pages[e - 1].print_index(e);
}

int		main(void)
{
	Phonebook		contactos[8];
	std::string		line;

	while(1)
	{
		std::cout << "Enter your Command: ";
		std::getline(std::cin, line);
		if(line == "ADD")
			adding_someone(contactos);
		else if (line == "SEARCH")
			Search_command(contactos);
		else if (line == "EXIT")
			return (0);
		else
			std::cerr << err_mssg << std::endl;
	}
}
