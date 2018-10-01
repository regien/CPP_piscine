#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

std::string		g_err_mssg = "usage:./replace [Filename] [str1] [replacer]";

void	parse_args(std::string file, std::string s1, std::string s2)
{
	if(s1.size() <= 0 || s2.size() a
}

int main(int argc, char **argv)
{
	std::string		file;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
	{
		std::cerr << g_err_mssg << std::endl;
		exit(EXIT_FAILURE);
	}
	parse_args(std::string(argv[1]), std::string(argv[2]), std::string(argv[3]));
	return (0);	
}