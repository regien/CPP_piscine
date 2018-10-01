#include <iostream>
#include <string>
#include <sstream>

int main(void)
{
	int					value1 = 15;
	int					*ptr = &value1;
	std::stringstream	vaina;

	vaina << ptr;
	// if you print vaina, you are gonna print the direction
	// of his pointer not the /ptr/ of ptr
	std::cout << vaina.str() << std::endl;
	std::cout << ptr <<std::endl;
}
