#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	taken = 0;
}

Phonebook::~Phonebook() {};

void	Phonebook::print_index(int i)
{
	int		e = i + 1;

	if (taken == 0)
		std::cout << "invalid index or empty" << std::endl;
	else
	{
		std::cout << "<User " << e << "> first_name: " << first_name << std::endl;
		std::cout << "<User " << e << "> last_name: " << last_name << std::endl;
		std::cout << "<User " << e << "> nickname: " << nickname << std::endl;
		std::cout << "<User " << e << "> login: " << login << std::endl;
		std::cout << "<User " << e << "> postal_address: " << postal_address << std::endl;
		std::cout << "<User " << e << "> email_address: " << email_address << std::endl;
		std::cout << "<User " << e << "> phone_number: " << phone_number << std::endl;
		std::cout << "<User " << e << "> birthday_date: " << birthday_date << std::endl;
		std::cout << "<User " << e << "> favorite_meal: " << favorite_meal << std::endl;
		std::cout << "<User " << e << "> underwear_color: " << underwear_color << std::endl;
		std::cout << "<User " << e << "> darkest_secret: " << darkest_secret << std::endl;
	}
}

void	Phonebook::add_contact(void)
{
	taken = 1;
	std::cout << "Let's add your contact into the Phonebook" << std::endl;
	std::cout << "Enter your first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter your last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter your login: ";
	std::getline(std::cin, login);
	std::cout << "Enter your postal address: ";
	std::getline(std::cin, postal_address);
	std::cout << "Enter your email address: ";
	std::getline(std::cin, email_address);
	std::cout << "Enter your phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter your birthday date: ";
	std::getline(std::cin, birthday_date);
	std::cout << "Enter your favorite meal: ";
	std::getline(std::cin, favorite_meal);
	std::cout << "Enter your underwear color: ";
	std::getline(std::cin, underwear_color);
	std::cout << "Enter your darkest secret: ";
	std::getline(std::cin, darkest_secret);
	std::cout << "Contact Succesfully added" << std::endl;
}
