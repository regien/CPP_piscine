#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

std::string		g_err_mssg = "usage: ./replace [Filename] [str1] [replacer]";

std::string	simple_to_upper(char *str)
{
	std::string	holder = "";
	
	for (int i = 0; str[i]; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			holder += (str[i] - 32);
		else
			holder += str[i];
	}
	holder += ".replace";
	return (holder);
}

void	parse_args(std::string file, std::string s1, std::string s2, char *str)
{
	if(file.size() <= 0 || s1.size() <= 0 || s2.size() <= 0)
	{
		std::cerr << g_err_mssg << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		std::ifstream		filestream;
		std::ofstream		file2;
		std::stringstream	buffer;
		std::string			holder;
		std::string			newname;

		newname = simple_to_upper(str);
		filestream.open(file.c_str());
		if (filestream.is_open())
		{
			buffer << filestream.rdbuf();
			holder = buffer.str();
		}
		else
		{
			std::cout << "can't open file, might be invalid" << std::endl;
			exit(EXIT_FAILURE);
		}
		file2.open(newname.c_str());
		while (holder.find(s1) != std::string::npos)
			holder.replace(holder.find(s1), s1.length(), s2);
		file2 << holder << std::endl;
		filestream.close();
		file2.close();
	}
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
	parse_args(std::string(argv[1]), std::string(argv[2]), std::string(argv[3]), argv[1]);
	return (0);	
}