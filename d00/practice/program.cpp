#include <iostream>
#include <string>
#include "Pendejada.class.hpp"

namespace	pendejada
{
	void	dia()
	{
		std::cout << "Imprimiendo el dia" << std::endl;
	}
	
	int		add_simple_mult(int val, int val2)
	{
		return((val + val2) * 2);
	}
	
	int		vaina = 15;
}

int main(int argc, char **argv)
{
	char		buffer[520];
	Pendejada	first_vaina(450, 100);

	if (argc != 2)
	{
		std::cout << "invalid number of values" << std::endl;
		return (0);
	}
	std::cout << argv[1] << std::endl;
	std::cout << "Reading from stdin now:" << std::endl;
	pendejada::dia();
	std::cout << pendejada::add_simple_mult(1, 2) << std::endl;
	std::cout << "imprimiendo valor de vaina : " << pendejada::vaina << std::endl;
	
	first_vaina.print_values();
	first_vaina.print_only_y();
}
