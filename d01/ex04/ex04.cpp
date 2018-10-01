#include <iostream>
#include <string>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string		&rfn = str;

	std::cout << "Regular string:\t\t" << str << std::endl
			  << "Pointer to string:\t" << *ptr << std::endl
			  << "Reference to string:\t" << rfn << std::endl;
	return (0);
}