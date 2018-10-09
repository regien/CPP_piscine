#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat		guy("Alan Garcia", 50);

	std::cout << guy << std::endl;
	while (true) {
		try {
			guy.incrementGrade(5);
		} catch (std::exception &err) {
			std::cerr << err.what() << std::endl;
			break;
		}
		std::cout << guy << std::endl;
	}
	std::cout << "HIGH DONE" << std::endl;

	Bureaucrat		man("Simon Martinez", 100);

	while (true) {
		try {
			guy.decrementGrade(5);
		} catch(std::exception &err) {
			std::cerr << err.what() << std::endl;
		}
		std::cout << guy << std::endl;
	}
	std::cout << "LOW DONE" << std::endl;
}
