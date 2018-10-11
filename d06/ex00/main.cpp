#include <cstdlib>
#include <iostream>
#include <string>
#include <string.h>
#include <iomanip>
#include <stdexcept>
#include <cmath>

// EXCEPTIONS

int		get_Precision(char *str) {
	int		i = 0;
	int		j;

	while(str[i] != 0 && str[i] != '.')
		++i;
	if (strlen(str) == i)
		return (1);
}

int		toInt(double number) {
	int result = static_cast<int>(number);
	return (result);
}

void	printInt(double number) {
	if (std::isnan(number) || std::isinf(number)) {
		std::cout << "int: impossible" << std::endl;
	} else {
		int	res = toInt(number);
		std::cout << "int: " << res << std::endl;
	}
	
}

void	print_Float(double number, int precision) {
	std::cout << "float: " << std::setprecision(precision) << std::fixed << static_cast<float>(number)
			  << "f" << std::endl;
}

void	print_Double(double number, int precision) {
	std::cout << "double: " << std::setprecision(precision) << std::fixed << static_cast<double>(number)
			  << std::endl;
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Usage: " << argv[0] << " [value]" << std::endl;
		return (0);
	}

	double	holder = std::atof(av[i]);
	int		precision = getPr
}