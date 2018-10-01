#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "invalid number of args" << std::endl;
		return (0);
	}

	std::string		newname(argv[1]);
	std::ifstream	file;
	std::ofstream	file2;
	std::stringstream	buffer;

	newname += ".replace";
//	file2.open(newname, std::ofstream::out | std::ofstream::app);
	file2.open(newname.c_str());
	file.open(argv[1]);


	if (file.is_open())
	{
		buffer << file.rdbuf();
//		buffer.str;
	}
	else
	{
		std::cout << "can't open file, might be invalid" << std::endl;
		return (0);
	}
	
	std::cout << "=====printing the whole file=====" << std::endl;
	std::cout << buffer.str();;
	return (0);
}
