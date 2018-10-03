#include <iostream>
#include <string>


int main(void)
{
	int		ta = 10;
	int		pe = 10 << 8;

	std::cout << "sample int " << ta << std::endl;
	std::cout << "sample convercion " << pe << std::endl;

	std::cout << "int =" << sizeof(int) << "float =" << sizeof(float) << std::endl;
}


