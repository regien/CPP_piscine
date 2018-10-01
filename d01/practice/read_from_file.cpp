#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **argv)
{
	if (ac != 2)
		return (0);
	
	std::ifstream	file;
	std::string		full;
	std::string		buffer;

	file.open(argv[1]);
	if (file.is_open())
		while (!file.eof())
		{
			getline(file, buffer);
			full += buffer + "\n";
		}
	file.close();
	std::cout << full;
	return (0);
}
