#include <iostream>
#include <list>
#include <string>
#include <iomanip>

char	err_mssg[] = "Valid Commands: ADD, SEARCH and EXIT";



int		main(void)
{
	std::
	std::string		line;

	while(1)
	{
		std::cout << "Enter your Command: ";
		std::getline(std::cin, line);
		if(line == "ADD")
			;
		else if (line == "SEARCH")
			;
		else if (line == "EXIT")
			return (0);
		else
			std::cerr << err_mssg << std::endl;
	}
}
