#include "Pendejada.class.hpp"

Pendejada::Pendejada(int a, int b)
{
	x = a;
	y = b;
}

Pendejada::~Pendejada(void)
{
	std::cout << "Destroying this Pendejada" << std::endl;
}

void	Pendejada::print_only_y(void)
{
	std::cout << "valor de y = " << y << std::endl;
}

void	Pendejada::print_values(void)
{
	std::string		vaina = "valor de x = ";
	std::string		second = " valor de y = ";
	std::cout << vaina << x << second << y << std::endl;
}
