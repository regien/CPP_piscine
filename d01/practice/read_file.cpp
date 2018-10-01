#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **argv)
{
	if (ac != 2)
		return (0);

	std::string			name(argv[1]);
	std::ifstream		in_vaina(name);
	std::ofstream		out_vaina(name + ".replace");

	std::ostringstream	bufferstream;
	bufferstream << in_vaina.rdbuf();
	
	std::string			buffer;

	buffer =	bufferstream.str();

	std::cout << "--- Printing whole file ----" << std::endl;
	std::cout << buffer << std::endl;
	
}
