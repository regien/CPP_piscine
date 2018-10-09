#include "Bureaucrat.hpp"

/*
int main(void)
{
	Bureaucrat c("Average Joe", 50);

	c.getName();
	c.getGrade();
	std::cout << c << std::endl;
	while (true)
	{
		try
		{
			c.incrementGrade(5);
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			break;
		}
		std::cout << c << std::endl;
	}
	std::cout << "Done" << std::endl;
}
*/

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
	std::cout << "DONE" << std::endl;
}