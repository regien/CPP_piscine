#include <iostream>


/*
int		main(void)
{
	char		buffer[512];

	std::cout << "Hello World" << std::endl;
	std::cin >> buffer;
	std::cout << "You entered [" << buffer << "]\n" << std::endl;
}
*/


int		main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	for (int i = 1; argv[i]; ++i)
		std::cout << argv[i] << std::endl;
}
